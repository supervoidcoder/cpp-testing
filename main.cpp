#include <iostream>

// colors

int main() {
    
    const std::string reset = "\033[0m";

    const std::string black   = "\033[30m";
    const std::string red     = "\033[31m";
    const std::string green   = "\033[32m";
    const std::string yellow  = "\033[33m";
    const std::string blue    = "\033[34m";
    const std::string magenta = "\033[35m";
    const std::string cyan    = "\033[36m";
    const std::string white   = "\033[37m";

    const std::string br_black   = "\033[90m";
    const std::string br_red     = "\033[91m";
    const std::string br_green   = "\033[92m";
    const std::string br_yellow  = "\033[93m";
    const std::string br_blue    = "\033[94m";
    const std::string br_magenta = "\033[95m";
    const std::string br_cyan    = "\033[96m";
    const std::string br_white   = "\033[97m";

    std::cout << black   << "Black"   << reset << std::endl;
    std::cout << red     << "Red"     << reset << std::endl;
    std::cout << green   << "Green"   << reset << std::endl;
    std::cout << yellow  << "Yellow"  << reset << std::endl;
    std::cout << blue    << "Blue"    << reset << std::endl;
    std::cout << magenta << "Magenta" << reset << std::endl;
    std::cout << cyan    << "Cyan"    << reset << std::endl;
    std::cout << white   << "White"   << reset << std::endl;

    std::cout << br_black   << "Bright Black"   << reset << std::endl;
    std::cout << br_red     << "Bright Red"     << reset << std::endl;
    std::cout << br_green   << "Bright Green"   << reset << std::endl;
    std::cout << br_yellow  << "Bright Yellow"  << reset << std::endl;
    std::cout << br_blue    << "Bright Blue"    << reset << std::endl;
    std::cout << br_magenta << "Bright Magenta" << reset << std::endl;
    std::cout << br_cyan    << "Bright Cyan"    << reset << std::endl;
    std::cout << br_white   << "Bright White"   << reset << std::endl;

    return 0;
}
