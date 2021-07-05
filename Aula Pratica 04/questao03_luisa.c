// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>

int main() {
    int x, y, n = 1;

    while (n == 1) {
        printf("Digite os valores de x e y: ");
        scanf("%d%d", &x, &y);

        if (x > y) {
            printf("Erro: x deve ser menor que y.\n\n");
        } else if ((x % 2 != 0) || (y % 2 != 0)) {
            printf("Apenas números pares são aceitos.\n\n");
        } else {
            n = 2;
            int c = 1, aux, auxX = x, space;
            while (x < y) {
                space = ((y - auxX) / 2) - c;
                while (space > 0) {
                    printf(" ");
                    space--;
                }
                c++;
                aux = 0;
                while (aux < x) {
                    printf("*");
                    aux++;
                }
                x += 2;
                printf("\n");
            }
        }
    }

    return 0;
}