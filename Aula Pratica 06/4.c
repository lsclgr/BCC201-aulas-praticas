// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>

int main() {
    int vet[15], n, aux;
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vet[i]);
    }
    printf("quantas posicoes deseja rotacionar: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        aux = vet[0];
        for (int j = 0; j < 14; j++) {
            vet[j] = vet[j + 1];
        }
        vet[14] = aux;
    }

    for (int i = 0; i < 15; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
    return 0;
}