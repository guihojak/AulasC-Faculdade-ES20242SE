#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    

int main() {
    
    int numero_secreto, palpite, tentativas = 0;

   
    srand(time(0));
    numero_secreto = rand() % 100 + 1; 

    printf("Bem-vindo ao jogo de adivinhacao!\n");
    printf("Tente adivinhar o numero secreto entre 1 e 100.\n");

    do {
        printf("Digite o seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numero_secreto) {
            printf("Muito baixo! Tente novamente.\n");
        } else if (palpite > numero_secreto) {
            printf("Muito alto! Tente novamente.\n");
        } else {
            printf("Parabens! Voce acertou o numero em %d tentativas!\n", tentativas);
        }

    } while (palpite != numero_secreto);

    return 0;
}
