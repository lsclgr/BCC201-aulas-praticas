// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>

int main() {
    char letter;

    printf("Digite uma letra: ");
    scanf("%c", &letter);

    if (letter == "A" || letter == "E" || letter == "I" || letter == "O" ||
        letter == "U" || letter == "a" || letter == "e" || letter == "i" ||
        letter == "o" || letter == "u") {
        printf("A letra eh uma vogal\n");

    } else {
        printf("A letra eh uma consoante\n");
    }

    return 0;
}