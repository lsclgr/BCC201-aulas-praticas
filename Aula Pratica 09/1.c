// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *vet, *vet1, maiorM = 0, menorM = 0, cont1 = 0;
    double media = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    vet = malloc(n * sizeof(int));

    printf("Digite os valores do vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
        media += vet[i];
    }
    media = (double)media / n;
    printf("A média é: %.1lf\n", media);
    for (int i = 0; i < n; i++) {
        if (vet[i] < media) {
            menorM++;
        } else {
            maiorM++;
        }
    }

    vet1 = malloc(menorM * sizeof(int));
    int cont2 = menorM;
    for (int i = 0; i < n; i++) {
        if (vet[i] < media) {
            vet1[cont1] = vet[i];
            cont1++;
        } else {
            vet1[cont2] = vet[i];
            cont2++;
        }
    }

    printf("Vetor com os valores abaixo da média: [ ");
    for (int i = 0; i < menorM; i++) {
        printf("%d ", vet1[i]);
    }
    printf("]\n");

    printf("Vetor com os valores abaixo da média: [ ");
    for (int i = menorM; i < n; i++) {
        printf("%d ", vet1[i]);
    }
    printf("]\n");

    free(vet);
    free(vet1);

    return 0;
}