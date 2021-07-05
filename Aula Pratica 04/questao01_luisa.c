// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>

long long fat(int n);

int main() {
    int x;
    printf("Digite o valor de n: ");
    scanf("%d", &x);

    if (x == 0) {
        printf("0! = 1\n");
    } else {
        printf("%d! = %lld\n", x, fat(x));
    }

    return 0;
}
long long fat(int n) {
    long long sum = 1;
    while (n > 0) {
        sum *= n;
        n--;
    }
    return sum;
}