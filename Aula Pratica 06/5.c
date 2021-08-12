// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>

int main() {
    double nota1[15], nota2[15];
    for (int i = 0; i < 15; i++) {
        printf("informe a nota 1 do aluno %d: ", i + 1);
        scanf("%lf", &nota1[i]);
        printf("informe a nota 2 do aluno %d: ", i + 1);
        scanf("%lf", &nota2[i]);
    }
    for (int i = 0; i < 15; i++) {
        printf("A media do aluno %d eh %.2lf!  ", i + 1, (nota1[i] + nota2[i]) / 2);
        if ((nota1[i] + nota2[i]) / 2 >= 60) {
            printf("APROVADO!\n");
        } else {
            printf("REPROVADO!\n");
        }
    }

    return 0;
}