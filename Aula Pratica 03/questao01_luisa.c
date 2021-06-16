// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

// obs para o corretor: Puca permitiu usar ternario, abraços e bom dia!!

#include <stdio.h>

int input();
void printMenu(int);
void convertAngle(int);
void convertTemp(int);
void kelvin(double);
void celsius(double);
void fahrenheit(double);
double radTodegrees(double);
double degreesToRad(double);

int main() {
    printMenu(1);
    int option01 = input();

    // imprimindo os menus para o usuario
    option01 == 1 ? printMenu(2) : printMenu(3);
    int option02 = input();

    // enviando para as funcoes de conversao
    option01 == 1 ? convertAngle(option02) : convertTemp(option02);

    return 0;
}

void printMenu(int i) {
    switch (i) {
        case 1:
            printf(
                "### CONVERSOR DE UNIDADES ###\n\n"
                "1) Angulo\n"
                "2) Temperatura\n\n"
                "Digite uma opcao: ");
            break;
        case 2:
            printf(
                "\nQual a unidade de origem?\n\n"
                "1) Graus\n"
                "2) Radianos\n\n"
                "Selecione uma opcao: ");
            break;

        case 3:
            printf(
                "\nQual a unidade de origem?\n\n"
                "1) Celsius\n"
                "2) Fahrenheit\n"
                "3) Kelvin\n\n"
                "Selecione uma opcao: ");
            break;
    }
}
int input() {
    int i;
    scanf("%d", &i);
    return i;
}

void convertAngle(int i) {
    double value;
    switch (i) {
        case 1:
            printf("\nDigite o valor em Graus: ");
            scanf("%lf", &value);
            printf("Valor em radianos: %lf\n", degreesToRad(value));
            break;

        case 2:
            printf("\nDigite o valor em Radianos: ");
            scanf("%lf", &value);
            printf("Valor em Graus: %.1lf\n", radTodegrees(value));
            break;
    }
}

double degreesToRad(double value) { return value * 0.0174533; }

double radTodegrees(double value) { return value / 0.0174533; }

void convertTemp(int i) {
    double value;
    switch (i) {
        case 1:
            printf("\nDigite o valor em Celsius: ");
            scanf("%lf", &value);
            celsius(value);
            break;

        case 2:
            printf("\nDigite o valor em Fahrenheit: ");
            scanf("%lf", &value);
            fahrenheit(value);
            break;

        case 3:
            printf("\nDigite o valor em Kelvin: ");
            scanf("%lf", &value);
            kelvin(value);
            break;
    }
}
void celsius(double value) {
    double tempF, tempK;
    tempF = value * 1.8 + 32;
    tempK = value + 273.15;
    printf("Valor em Fahrenheit: %.2lf\nValor em Kelvin: %.2lf\n", tempF,
           tempK);
}
void fahrenheit(double value) {
    double tempC, tempK;
    tempC = (value - 32) / 1.8;
    tempK = (value - 32) * 5 / 9 + 273.15;
    printf("Valor em Celsius: %.2lf\nValor em Kelvin: %.2lf\n", tempC, tempK);
}
void kelvin(double value) {
    double tempF, tempC;
    tempF = (value - 273) * 1.8 + 32;
    tempC = value - 273.15;
    printf("Valor em Fahrenheit: %.2lf\nValor em Celsius: %.2lf\n", tempF, tempC);
}