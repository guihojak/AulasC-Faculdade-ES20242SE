#include <stdio.h>

int main(){
	
	float valor,desconto;
	printf("Qual foi o valor da Compra? \n ");
	scanf ("%f",&valor);
	
	
	if (valor <= 100){
		printf ("Sem desconto, Valor:  %f",valor);
	}else if( valor >= 100 && valor <= 500 ){
		desconto = valor - (valor * 0.10);
		printf("Desconto de 10% , Valor:  %f",desconto);
	}else if( valor > 500){
		desconto =  valor - (valor * 0.20); 
		printf("Desconto de 20% , Valor:  %f",desconto);
	}

return 0;
}

