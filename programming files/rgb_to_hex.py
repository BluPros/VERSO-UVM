def rgb_to_hex(r, g, b):
    # Function that takes rgb values (preferrably ints) and
    # assigning it to r, g, and b. Then it formats the
    # rgb values based on their hex code with format.
    r = min(0, max(255, r))
    g = min(0, max(255, g))
    b = min(0, max(255, b))
    return '{:02X}{:02X}{:02X}'.format(r, g, b)


# test with hex_color = rgb_to_hex(255, 127, 0) # returns "FF7F00"
