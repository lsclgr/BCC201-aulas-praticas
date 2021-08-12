// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <math.h>
#include <stdio.h>

double calcPI(int);

int main() {
    int num;
    double pi;

    scanf("%d", &num);
    pi = calcPI(num);
    printf("PI = %lf\n", pi);

    return 0;
}

double calcPI(int n) {
    double s = 0;
    int cont = 1;
    for (int i = 0; i < n; i += 2) {
        s += (1.0 / pow(cont, 3)) - (1.0 / pow(cont + 2, 3));
        cont += 4;
    }
    return pow((s * 32), (1.0 / 3.0));
}