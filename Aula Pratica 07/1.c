// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>

int main() {
    int m, n, p, q, sum;
    scanf("%d%d%d%d", &m, &p, &q, &n);
    int mat1[m][p], mat2[q][n], mat3[m][n];
    if (p == q) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < p; j++) {
                scanf("%d", &mat1[i][j]);
            }
        }
        for (int i = 0; i < q; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &mat2[i][j]);
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                mat3[i][j] = 0;
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                sum = 0;
                for (int k = 0; k < m; k++) {
                    sum = mat1[i][k] * mat2[k][j];
                    mat3[i][j] += sum;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("%2d ", mat3[i][j]);
            }
            printf("\n");
        }

    } else {
        printf("Nao eh possivel multiplicar essas duas matrizes");
    }

    return 0;
}