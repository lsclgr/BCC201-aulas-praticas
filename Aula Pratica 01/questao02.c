// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101
#include <math.h>
#include <stdio.h>

int main() {
    double x1, x2, x3, value;
    printf("Informe os 3 valores: ");
    scanf("%lf%lf%lf", &x1, &x2, &x3);
    value = pow((x1 + pow(x2, 2), pow(x3, 2)), 2) - pow((x1 + x2 + x3), 2);
    printf("Resultado: %.0lf\n", value);

    return 0;
}