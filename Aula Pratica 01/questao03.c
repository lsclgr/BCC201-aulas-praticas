// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101
#include <stdio.h>

int main() {
    double tempC, tempF, tempK;
    printf("Informe a temperatura em Celsius: ");
    scanf("%lf", &tempC);
    tempF = (tempC * 9 / 5) + 32;
    tempK = tempC + 273.15;
    printf(
        "A temperatura em Fahrenheit: %.1lf\n A temperatura em Kelvin: %.0lf\n",
        tempF, tempK);

    return 0;
}