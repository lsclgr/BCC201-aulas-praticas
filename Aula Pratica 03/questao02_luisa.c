// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <math.h>
#include <stdio.h>

double calcDistance(double, double, double, double);

int main() {
    double x1, y1, x2, y2;

    printf("Informe os valores dois dois pontos (x1, y1) e (x2, y2) respectivamente: ");
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    printf("Distancia entre os dois pontos: %.3lf\n", calcDistance(x1, y1, x2, y2));

    return 0;
}

double calcDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}