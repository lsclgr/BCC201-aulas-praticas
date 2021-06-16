// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>

char letter;

int isConsoant();

int main() {
    printf("Informe a letra: ");
    scanf("%c", &letter);
    isConsoant() == 0 ? printf("Eh consoante!\n")
                      : printf("Nao eh consoante!\n");
    return 0;
}

int isConsoant() {
    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
            break;
        default:
            return 0;
            break;
    }
}