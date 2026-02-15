#include <iostream>
#include <fstream>
#include <string>
#include <cmath> // For gradient calculation
#include <iomanip> // For std::setw and std::setfill

// Define the ESC character (ASCII 27)
#define ESC "\x1b"
// ANSI escape code for resetting color and attributes
#define RESET ESC "[0m"

void generateGradientFile(const std::string& filename, int steps) {
    std::ofstream outFile(filename);
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

    outFile << "This is a red-to-green gradient generated with ANSI escape codes:\n\n";

    for (int i = 0; i <= steps; ++i) {
        // Calculate RGB values for a red-to-green gradient
        // Red decreases from 255 to 0, Green increases from 0 to 255
        int r = 255 - static_cast<int>(255.0 * i / steps);
        int g = static_cast<int>(255.0 * i / steps);
        int b = 0;

        // Generate the 24-bit foreground color escape sequence
        // Format: ESC[38;2;r;g;bm (foreground color)
        std::string colorCode = ESC "[38;2;" + std::to_string(r) + ";"
                              + std::to_string(g) + ";" + std::to_string(b) + "m";

        // Write the color code and a character (e.g., a block █ or a simple #) to the file
        outFile << colorCode << "#";
    }

    // Reset colors after the gradient and add a newline
    outFile << RESET << "\n" << std::endl;

    outFile.close();
    std::cout << "Gradient written to " << filename << std::endl;
    std::cout << "To view it, use a compatible terminal command, e.g., 'cat " << filename << "'" << std::endl;
}

int main() {
    // For Windows, enable virtual terminal processing if needed
    // More details on enabling VT processing can be found in Stack Overflow sources

    generateGradientFile("gradient.txt", 100); // Generate a gradient with 100 steps

    return 0;
}
