// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>
#include <string.h>

int main() {
    char name[70], lastName[15];
    int i, cont = 0, contSpace = 0;
    printf("Digite o nome completo: ");
    fgets(name, 70, stdin);

    for (i = strlen(name) - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            break;
        }
    }

    for (int j = 0; j <= i; j++) {
        if (name[j] == ' ') {
            contSpace++;
        }
    }
    for (int k = i + 1; k < strlen(name) - 1; k++) {
        lastName[cont] = name[k];
        cont++;
    }
    printf("%s, ", lastName);
    for (int j = 0; j < i; j++) {
        printf("%c", name[j]);
    }
    printf("\nTotal de letras: %ld", (strlen(name) - 1) - contSpace);
    printf("\nTotal de letras do ultimo sobrenome: %d\n", cont);
    return 0;
}