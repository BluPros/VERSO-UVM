#include <iostream>
#include <sstream>
#include <iomanip>
//Take the color values in RGB and converts to a hexadecimal format
std::string rgb_to_hex(int r, int g, int b)
{
    //sets string to rgb  values
    r = std::max(0, std::min(255, r));
    g = std::max(0, std::min(255, g));
    b = std::max(0, std::min(255, b));

    //converts to hexadecimal
    std::stringstream ss;
    ss << std::uppercase << std::hex << std::setfill('0')
       << std::setw(2) << r << std::setw(2) << g << std::setw(2) << b;

    return ss.str();
}

//Test with std::string hexColor = rgb_to_hex(255, 127, 0); // returns "FF7F00"
