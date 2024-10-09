#include <stdio.h>

int main(){

    int soma = 0;
    int i,n;
    float nA,media;

    printf("Digite a quantidade de alunos: \n ");
    scanf("%d",&n);

        for( i = 1 ; i <= n ; i++){
            
            nA = 0;
             
             printf("Digite a altura do %d aluno: \n",i);
             scanf("%f",&nA);
             soma = soma + nA;
            media = soma / i;
        }
            
            printf("Media = %2.f ",media);
            return 0;


}