// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101
#include <stdio.h>

void calcTempMed(double vet[]);

int main() {
    double vet[30];
    for (int i = 0; i < 30; i++) {
        printf("Informe a temperatura no dia %d: ", i);
        scanf("%lf", &vet[i]);
    }
    calcTempMed(vet);

    return 0;
}

void calcTempMed(double vet[]) {
    double med;
    int cont1 = 0, cont2 = 0;
    for (int i = 0; i < 30; i++) {
        med += vet[i];
    }
    med /= 30;

    for (int i = 0; i < 30; i++) {
        if (vet[i] > med) {
            cont1++;
        } else if (vet[i] < med) {
            cont2++;
        }
    }
    printf(
        "\nHouveram %d dias com a temperatura acima da media e %d dias com a "
        "temperatura abaixo da media\n",
        cont1, cont2);
}