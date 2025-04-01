def rgb_to_hex(r, g, b):
    # Function that takes rgb values (preferrably ints) and
    # assigning it to r, g, and b. Then it formats the
    # rgb values based on their hex code with format.
    r = max(0, min(255, r))
    g = max(0, min(255, g))
    b = max(0, min(255, b))
    return '{:02X}{:02X}{:02X}'.format(r, g, b)


# test with hex_color = rgb_to_hex(255, 127, 0) # returns "FF7F00"
