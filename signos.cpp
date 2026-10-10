#include <iostream>
#include <string>

std::string frecuenciaCardiaca(double n) {
    if (n < 60) {
        return "El paciente presenta bradicardia";
    } else if (n > 100) {
        return "El paciente presenta taquicardia";
    } else {
        return "El paciente presenta frecuencia cardíaca normal";
    }
}

double fahrenheitACelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main () {
    double frecuencia;
    std::cout << "Ingrese la frecuencia cardíaca del paciente: ";
    std::cin >> frecuencia;
    std::string resultado = frecuenciaCardiaca(frecuencia);
    std::cout << resultado << std::endl;

    double fahrenheit;
    std::cout << "Ingrese la temperatura en grados Fahrenheit: ";
    std::cin >> fahrenheit;

    double celsius = fahrenheitACelsius(fahrenheit);
    std::cout << fahrenheit << " grados Fahrenheit son " << celsius << " grados Celsius." << std::endl;

    return 0;
}