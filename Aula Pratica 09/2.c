// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101
#include <stdio.h>
#include <stdlib.h>

// Recebe uma matriz e seus ındices e retorna a matriz transposta
double** transposta(double** A, int m, int n);

// Aloca espaco para uma matriz m x n
double** criaMatriz(int m, int n);

// libera o espaco utilizado por uma matriz
void liberaMatriz(double** A, int m);

// imprime a matriz
void imprimeMatriz(double** A, int m, int n);

int main() {
    int m, n;
    printf("Informe m e n: ");
    scanf("%d%d", &m, &n);
    double** mat;
    mat = criaMatriz(m, n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }
    double** t;
    t = transposta(mat, m, n);

    printf("Matriz original:\n");
    imprimeMatriz(mat, m, n);
    printf("Matriz transposta:\n");
    imprimeMatriz(t, n, m);
    liberaMatriz(mat, m);
    liberaMatriz(t, n);

    return 0;
}

double** criaMatriz(int m, int n) {
    double** matriz;
    matriz = malloc(m * sizeof(double*));
    for (int i = 0; i < m; i++) {
        matriz[i] = malloc(n * sizeof(double));
    }

    return matriz;
}

double** transposta(double** A, int m, int n) {
    double** t = criaMatriz(n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            t[i][j] = A[j][i];
        }
    }
    return t;
}

void liberaMatriz(double** A, int m) {
    for (int i = 0; i < m; i++) {
        free(A[i]);
    }
    free(A);
}

void imprimeMatriz(double** A, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4.1lf", A[i][j]);
        }
        printf("\n");
    }
}
