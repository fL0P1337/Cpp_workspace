#include <iostream>
#include <cmath>

double calculateArea(double radius) {
    return M_PI * std::pow(radius, 2);
}

double calculatePerimeter(double radius) {
    return 2 * M_PI * radius;
}

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double area = calculateArea(radius);
    double perimeter = calculatePerimeter(radius);

    std::cout << "The area of the circle is: " << area << std::endl;
    std::cout << "The perimeter of the circle is: " << perimeter << std::endl;

    return 0;
}