// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>

int main() {
    int year;
    
    printf("Digite o ano: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) ||
        (year % 100 == 0 && year % 400 == 0)) {
        printf("O ano eh bissexto!\n");
    } else {
        printf("O ano nao eh bissexto!\n");
    }

    return 0;
}