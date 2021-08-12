// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101
#include <stdio.h>
#include <stdlib.h>

int verifyMagicSquare(int** A, int X, int sum);

int main() {
    int **matriz, sum, X;

    printf("Digite o valor de n: ");
    scanf("%d", &X);

    matriz = malloc(X * sizeof(int*));
    for (int i = 0; i < X; i++) {
        matriz[i] = malloc(X * sizeof(int));
    }

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < X; j++) {
            scanf("%d", &matriz[i][j]);
        }
        sum += matriz[i][0];
    }

    int v = verifyMagicSquare(matriz, X, sum);

    if (v) {
        printf("Esta matriz eh um quadrado magico!\n");
    } else {
        printf("Essa matriz nao eh um quadrado magico!\n");
    }
    for (int i = 0; i < X; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}

int verifyMagicSquare(int** A, int X, int sum) {
    int cont = 0, sum2, sum3, sum4 = 0, sum5 = 0;

    for (int i = 0; i < X; i++) {
        sum2 = 0;
        sum3 = 0;
        for (int j = 0; j < X; j++) {
            sum2 += A[i][j];
            sum3 += A[j][i];
            if (i == j) {
                sum4 += A[j][i];
            }
            if (i + j == 3) {
                sum5 += A[j][i];
            }
        }
        if (sum2 == sum) {
            cont++;
        }
        if (sum3 == sum) {
            cont++;
        }
    }
    if (sum4 == sum) {
        cont++;
    }
    if (sum5 == sum) {
        cont++;
    }
    return cont == 18 ? 0 : 1;
}