// Luisa Calegari de Barros Cizilio
// Turma 31
// Matricula: 20.2.4101

#include <stdio.h>

typedef struct {
    double real;
    double imaginario;
} Complexo;

// funcao que retorna x + y
Complexo somaComplexo(Complexo x, Complexo y);

// funcao que retorna x - y
Complexo subComplexo(Complexo x, Complexo y);

// funcao que retorna x * y
Complexo multComplexo(Complexo x, Complexo y);

int main() {
    Complexo x, y, result;
    char op;
    printf("Calculadora de numeros complexos!\n\n");
    printf("Digite os valores de a e b (x = a + bi): ");
    scanf("%lf%lf", &x.real, &x.imaginario);
    printf("Digite os valored de c e d (y = c + di): ");
    scanf("%lf%lf", &y.real, &y.imaginario);
    printf("Digite a operacao (+, - ou *): ");
    scanf("% c", &op);

    switch (op) {
        case '+':
            result = somaComplexo(x, y);
            break;
        case '-':
            result = subComplexo(x, y);
            break;
        case '*':
            result = multComplexo(x, y);
            break;
        default:
            printf("Operacao invalida!");
            break;
    }

    if (result.real == 0.0) {
        printf("\nResultado: %.1lf i\n", result.imaginario);
    } else if (result.imaginario == 0.0) {
        printf("\nResultado: %.1lf\n", result.real);
    } else if (result.imaginario == 1) {
        printf("\nResultado: %.1lf + i\n", result.real);
    } else {
        printf("\nResultado: %.1lf + %.1lf i\n", result.real,
               result.imaginario);
    }

    return 0;
}

Complexo somaComplexo(Complexo x, Complexo y) {
    Complexo result;
    result.real = x.real + y.real;
    result.imaginario = x.imaginario + y.imaginario;
    return result;
}
Complexo subComplexo(Complexo x, Complexo y) {
    Complexo result;
    result.real = x.real - y.real;
    result.imaginario = x.imaginario - y.imaginario;
    return result;
}
Complexo multComplexo(Complexo x, Complexo y) {
    Complexo result;
    result.real = (x.real * y.real) - (x.imaginario * y.imaginario);
    result.imaginario = (x.real * y.imaginario) + (x.imaginario * y.real);
    return result;
}