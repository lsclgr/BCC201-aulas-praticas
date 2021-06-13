// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101
#include <stdio.h>
int main() {
    float a, b, c, d, value;
    printf("Digite os valores a, b, c, d: ");
    scanf("%f%f%f%f", &a, &b, &c, &d);
    value = (a * a * a) * ((b + c) / d);
    printf("a = %.1f, b = %.1f, c = %.1f, d = %.1f\n", a, b, c, d);
    printf("x = %.1f\n", value);

    return 0;
}