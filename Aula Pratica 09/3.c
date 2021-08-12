// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101
#include <stdio.h>
#include <stdlib.h>

int multiplicaMatrizes(int*** R, int** A, int m, int n, int** B, int p, int q);
int** criaMatriz(int m, int n);
void liberaMatriz(int** M, int m);
int** leMatriz(int** M, int m, int n);
void imprimeMatriz(int** M, int m, int n);

int main() {
    int **R, **A, **B;
    int m, n, p, q;

    printf("Digite os tamanhos da matriz A: ");
    scanf("%d%d", &m, &n);
    A = criaMatriz(m, n);
    printf("Digite os dados da matriz A:");
    A = leMatriz(A, m, n);
    printf("Digite os tamanhos da matriz B: ");
    scanf("%d%d", &p, &q);
    B = criaMatriz(p, q);
    printf("Digite os dados da matriz B:");
    B = leMatriz(B, p, q);

    R = criaMatriz(m, q);

    int isPossible = multiplicaMatrizes(&R, A, m, n, B, p, q);

    if (isPossible) {
        printf("Resultado de A x B:\n");
        imprimeMatriz(R, m, q);
    } else {
        printf("Nao eh possivel multiplicar as matrizes A e B.\n");
    }

    liberaMatriz(A, m);
    liberaMatriz(B, p);
    liberaMatriz(R, m);

    return 0;
}

int multiplicaMatrizes(int*** R, int** A, int m, int n, int** B, int p, int q) {
    int sum;
    if (n == p) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                sum = 0;
                for (int k = 0; k < n; k++) {
                    sum += A[i][k] * B[k][j];
                }
                (*R)[i][j] = sum;
            }
        }
        return 1;
    } else {
        return 0;
    }
}
int** criaMatriz(int m, int n) {
    int** matriz;
    matriz = malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        matriz[i] = malloc(n * sizeof(int));
    }

    return matriz;
}
void liberaMatriz(int** M, int m) {
    for (int i = 0; i < m; i++) {
        free(M[i]);
    }
    free(M);
}

int** leMatriz(int** M, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &M[i][j]);
        }
    }
    return M;
}

void imprimeMatriz(int** M, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", M[i][j]);
        }
        printf("\n");
    }
}