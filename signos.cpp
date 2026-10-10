#include <iostream>

double fahrenheitACelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}
int main () {
    double fahrenheit;
    std::cout << "Ingrese la temperatura en grados Fahrenheit: ";
    std::cin >> fahrenheit;

    double celsius = fahrenheitACelsius(fahrenheit);
    std::cout << fahrenheit << " grados Fahrenheit son " << celsius << " grados Celsius." << std::endl;

    return 0;
}