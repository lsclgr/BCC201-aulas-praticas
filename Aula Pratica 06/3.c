// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printVet(int vet[], int n);

int main() {
    int vet[500], n, nRand;
    srand(time(NULL));

    do {
        printf("Informe um valor entre 0 e 500: ");
        scanf("%d", &n);
        if (n < 0 || n > 500)
            printf("O valor informado nao esta entre 0 e 500!\n");
    } while (n < 0 || n > 500);

    for (int i = 0; i < n; i++) {
        vet[i] = 0;
    }
    for (int i = 0; i < 100000; i++) {
        nRand = rand() % n + 1;
        vet[nRand - 1]++;
    }
    printVet(vet, n);
    return 0;
}

void printVet(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        printf("o numero %d foi gerado %d vezes!\n", i + 1, vet[i]);
    }
}