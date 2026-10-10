















#include <iostream>
#include <string>
std::string fecuencia(double n) {
    if (n < 60) {
        return "El paciente presenta bradicardia";
    } else if (n > 100) {
        return "El paciente presenta taquicardia";
    } else {
        return "El paciente presenta frecuencia cardíaca normal";
    }
}
int main () {
    double frecuencia;
    std::cout << "Ingrese la frecuencia cardíaca del paciente: ";
    std::cin >> frecuencia;
    std::string resultado = fecuencia(frecuencia);
    std::cout << resultado << std::endl;
    return 0;
}