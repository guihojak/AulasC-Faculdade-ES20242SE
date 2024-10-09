#include <stdio.h>

#include <stdio.h>

int main() {
    int i = 0;
    float numero, soma = 0, media;

    do {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numero);
        soma += numero;
        i++;
    } while (i < 5);

    media = soma / 5;
    printf("A media dos 5 numeros e: %.2f\n", media);

    return 0;
}

