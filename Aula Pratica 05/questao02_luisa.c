// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>

int verifyCPF(long long int cpf);

int main() {
    long long int cpf;
    scanf("%lld", &cpf);

    if (verifyCPF(cpf) == 1) {
        printf("Valido!\n");
    } else {
        printf("Invalido\n");
    }

    return 0;
}

int verifyCPF(long long int cpf) {
    long long int rest1 = 0, rest2 = 0, aux = 10000000000;
    int auxCPF, aux2, aux3, c10, c11;

    for (int i = 0; i < 11; i++) {
        auxCPF = cpf / aux;
        cpf -= (auxCPF * aux);
        aux = (aux / 10);

        if (i < 9) {
            rest1 += (auxCPF * (10 - i));
            rest2 += (auxCPF * (11 - i));
        } else if (i == 9) {
            c10 = auxCPF;
        } else if (i == 10) {
            c11 = auxCPF;
        }
    }
    aux2 = (rest1 * 10) % 11;
    rest2 += (aux2 * 2);
    aux3 = (rest2 * 10) % 11;
    if (aux2 == c10 && aux3 == c11) {
        return 1;
    } else {
        return 0;
    }
}