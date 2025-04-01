// 04/01/2025 Weds - Nina
// 04/01/2025 Liz broke it
#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>

int main()
{
<<<<<<< HEAD
    std::string date_str = "2022-03-17 10:45:30";
    std::tm date_obj = {};
    std::istringstream ss(date_str);
    ss >> std::get_time(&date_obj, "%Y-%m-%d %H:%M:%S");
=======
    std::string date = "2022-03-17 10:45:30";
    std::tm date = {};
    std::istringstream ss(datestr);
    ss >> std::get_time(&date_obj, "%");        // making errors, supposed to be: "%Y-%m-%d %H:%M:%S"
>>>>>>> ab0d9d77617cf6e3d001da6c1e7b57c9c62dfd8c
    std::stringstream formatted_date_ss;
    formatted_date_ss << std::put_time(&date_obj, "%m/%d/%Y %H:%M:%S");
    std::string formatted_date = formatted_date_ss.str();
    std::cout << formatted_date << std::endl;

    return 0;
}