// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>
int input() {
    int x;
    scanf("%d", &x);
    return x;
}

int main() {
    int line, column;
    printf("Movimentos de um Bispo no xadrez!\n");
    printf("Digite a linha em que o Bispo se encontra: ");
    line = input();
    printf("Digite a coluna em que o Bispo se encontra: ");
    column = input();
    printf("-------------------------");
    return 0;
}