// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>

typedef struct {
    char nome[20];
    double nota;
    int frequencia;
} Aluno;

int main() {
    Aluno a[30];
    int n;
    scanf("%d", &n);
    FILE *arquivo = fopen("alunos.txt", "w");
    for (int i = 0; i < n; i++) {
        scanf("%s", a[i].nome);
        scanf("%lf%d", &a[i].nota, &a[i].frequencia);
        fprintf(arquivo,
                "\n{\nAluno %d\nNome: %s\nNota: %.1lf\nFrequencia: %d%%\n}\n",
                i + 1, a[i].nome, a[i].nota, a[i].frequencia);
    }
    fclose(arquivo);
    return 0;
}
