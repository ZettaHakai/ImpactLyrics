# Python 3.x

def generate_sliding_arrays_close_only(base_line, start_id=0x900, emphasis="CTR_EM_YELLOW", close="CTR_CLOSE_EM"):
    arrays = {}
    output_id = start_id

    # First, prepend emphasis at the first letter (or first CHR_)
    first_letter_index = next((i for i, v in enumerate(base_line) if v.startswith("CHR_")), None)
    if first_letter_index is None:
        return arrays  # no letters found

    for i, val in enumerate(base_line):
        if not val.startswith("CHR_"):
            continue

        line = base_line.copy()
        # Insert the closing emphasis just after the current letter
        line.insert(i + 1, close)
        # Prepend the opening emphasis at the very first letter only once
        line.insert(first_letter_index, emphasis)

        array_name = f"scenario_text_{output_id:04X}"
        arrays[array_name] = line
        output_id += 1

    return arrays


def write_arrays_to_file(arrays, filename="scenario_arrays.c"):
    with open(filename, "w") as f:
        for name, content in arrays.items():
            line_str = ", ".join(content)
            f.write(f"static s16 {name}[] = {{ {line_str} }};\n\n")
    print(f"Written {len(arrays)} arrays to {filename}")


# ---------------- Put text within base line with every PCT AND CHR in its own quotation, ----------------

base_line = [
    "PCT_SPACE", "PCT_SPACE", "PCT_SPACE", "PCT_SPACE", "PCT_SPACE", "PCT_SPACE", "PCT_SPACE",
    "CHR_B", "CHR_U", "CHR_R", "CHR_E", "CHR_I", "CHR_K", "CHR_U",
    "PCT_SPACE",
    "CHR_D", "CHR_A", "CHR_U", "CHR_N", "PCT_EXCLAMATION",
    "CTR_ENDLINE"

    ]

arrays = generate_sliding_arrays_close_only(base_line, start_id=0x900)
write_arrays_to_file(arrays, filename="scenario_arrays.c")