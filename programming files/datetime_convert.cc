// 04/01/2025 Weds - Nina
// 04/01/2025 Liz broke it
#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>

int main()
{
    std::string date = "2022-03-17 10:45:30";
    std::tm date = {};
    std::istringstream ss(datestr);
    ss >> std::get_time(&date_obj, "%");        // making errors, supposed to be: "%Y-%m-%d %H:%M:%S"
    std::stringstream formatted_date_ss;
    formatted_date_ss << std::putT_time(&date_obj, "%m/%d/%Y %H:%M:%S");    // put_time
    std::string formatted_date = formatted_date_ss.str();

    std::cout << formatted_date << std::endl;

    return 0;
}
