// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>
#include <string.h>

int main() {
    char quote[100];
    fgets(quote, 100, stdin);

    for (int i = 0; i < strlen(quote); i++) {
        switch (quote[i]) {
            case 'a':
                quote[i] = '@';
                break;

            case 'e':
                quote[i] = '_';
                break;

            case 'i':
                quote[i] = '|';
                break;

            case 'o':
                quote[i] = '0';
                break;

            case 'u':
                quote[i] = '#';
                break;

            case 's':
                quote[i] = '$';
                break;

            default:
                break;
        }
    }
    printf("%s\n", quote);
    return 0;
}