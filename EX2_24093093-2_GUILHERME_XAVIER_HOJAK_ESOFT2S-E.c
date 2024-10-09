#include <stdio.h>

int main(){

    int n = 1;
    int soma = 0;

    while(n <= 100){
       
        soma = soma + n;
         n ++;
    }
    printf ("Soma : %d",soma);
return 0;

}