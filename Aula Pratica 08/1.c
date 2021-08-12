// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>

struct Racional {
    int numerador;
    int denominador;
};

int equal(struct Racional r1, struct Racional r2);
struct Racional mdc(struct Racional r);

int main() {
    struct Racional r1, r2;
    printf("Digite numerador e denominador de r1: ");
    scanf("%d%d", &r1.numerador, &r1.denominador);
    printf("Digite numerador e denominador de r2: ");
    scanf("%d%d", &r2.numerador, &r2.denominador);
    r1 = mdc(r1);
    r2 = mdc(r2);
    int x = equal(r1, r2);
    if (x == 1) {
        printf("r1 e r2 sao iguais!\n");
    } else {
        printf("r1 e r2 sao diferentes!\n");
    }
    return 0;
}

struct Racional mdc(struct Racional r) {
    int vet[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int mdc = 1;
    struct Racional r1 = r;

    for (int i = 0; i < 15;) {
        if ((r1.denominador % vet[i] == 0) && (r1.numerador % vet[i] == 0)) {
            mdc *= vet[i];
            r1.denominador /= vet[i];
            r1.numerador /= vet[i];
        } else if ((r1.denominador % vet[i] == 0) &&
                   (!(r1.numerador % vet[i] == 0))) {
            r1.denominador /= vet[i];
        } else if ((!(r1.denominador % vet[i] == 0)) &&
                   (r1.numerador % vet[i] == 0)) {
            r1.numerador /= vet[i];
        } else if (!(r1.denominador % vet[i] == 0) &&
                   !(r1.numerador % vet[i] == 0)) {
            i++;
        }
    }
    r.denominador /= mdc;
    r.numerador /= mdc;
    return r;
}
int equal(struct Racional r1, struct Racional r2) {
    if (r1.denominador == r2.denominador && r1.numerador == r2.numerador) {
        return 1;
    } else {
        return 0;
    }
}