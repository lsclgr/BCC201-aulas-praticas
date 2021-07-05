// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>

int ehPrimo(int n);

int main() {
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);

    if (ehPrimo(x) == 1) {
        printf("%d é um número primo!\n", x);
    } else {
        printf("%d NÃO é um número primo!\n", x);
    }

    return 0;
}
int ehPrimo(int n) {
    int x = 0, cont = 2;
    while (cont < n) {
        if (n % cont == 0) {
            x++;
        }
        cont++;
    }
    return x == 0 ? 1 : 0;
}