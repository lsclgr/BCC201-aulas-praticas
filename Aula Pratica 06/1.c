// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101
#include <stdio.h>

int main() {
    int vet[10];
    vet[0] = 1;
    vet[1] = 1;

    for (int i = 2; i < 10; i++) {
        vet[i] = vet[i - 1] + vet[i - 2];
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
    return 0;
}