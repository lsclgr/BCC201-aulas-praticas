// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>

int main() {
    int value1, value2, value3, biggest, med, smallest;

    printf("Informe os 3 valores: ");
    scanf("%d%d%d", &value1, &value2, &value3);

    if (value1 > value2 && value1 > value3) {
        biggest = value1;

        if (value2 > value3) {
            med = value2;
            smallest = value3;
        } else {
            med = value3;
            smallest = value2;
        }
    }

    if (value2 > value1 && value2 > value3) {
        biggest = value2;

        if (value1 > value3) {
            med = value1;
            smallest = value3;
        } else {
            med = value3;
            smallest = value1;
        }
    }

    if (value3 > value2 && value3 > value1) {
        biggest = value3;

        if (value2 > value1) {
            med = value2;
            smallest = value1;
        } else {
            med = value1;
            smallest = value2;
        }
    }

    printf("Menor: %d\nIntermediario: %d\nMaior: %d\n", smallest, med, biggest);

    return 0;
}