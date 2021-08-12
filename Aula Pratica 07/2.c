// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>
#include <string.h>

int main() {
    char word[20], wordRev[20];
    int cont;
    scanf("%s", word);

    while (strcmp(word, "FIM") != 0) {
        cont = 0;
        for (int i = strlen(word) - 1; i >= 0; i--) {
            wordRev[cont] = word[i];
            cont++;
        }

        if (strcmp(word, wordRev) == 0) {
            printf("%s é um palindromo\n", word);
        } else {
            printf("%s não é um palindromo\n", word);
        }
        scanf("%s", word);
    }
    return 0;
}