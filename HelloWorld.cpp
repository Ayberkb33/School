#include <iostream>
#include <cmath>  // For sin() and M_PI

int main() {
    double degrees = 30.0;
    double radians = degrees * M_PI / 180.0;  // Convert degrees to radians

    std::cout << "sin(30 degrees): " << sin(radians) << std::endl;  // Output should be 0.5

    return 0;
}

