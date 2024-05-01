#include <iostream>
#include <cmath>

int main() {
    double radius;
    int M_PI = 3.14;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double area = M_PI * std::pow(radius, 2);
    std::cout << "The area of the circle is: " << area << std::endl;

    return 0;
}