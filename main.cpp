#include <iostream>
#include <string>
#include <vector>
#include <cmath>

// Function to print a gradient string
void printGradient(const std::string& text) {
    int n = text.length();
    for (int i = 0; i < n; ++i) {
        // Calculate RGB values (Red -> Blue gradient)
        // Red: 255 -> 0, Blue: 0 -> 255
        int r = 255 - (255 * i / n);
        int g = 0;
        int b = 255 * i / n;

        // ANSI Escape Code: \033[38;2;R;G;Bm
        std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m" << text[i];
    }
    // Reset color to default
    std::cout << "\033[0m" << std::endl;
}

int main() {
    printGradient("Hello ANSI Gradient World!");
    return 0;
}
