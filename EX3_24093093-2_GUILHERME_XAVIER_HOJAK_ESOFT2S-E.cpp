#include <stdio.h>

int main(){
	
	char letra;
	float salario,bonus;
	
	printf ("Informe a Avaliacao:  \n");
	scanf("%c",&letra);
	
	if (letra != 'A' && letra != 'B' && letra != 'C'){
		printf("Valor Invalido!");
	} else {
		int main;
	}
	
	printf("Informe o Salario:  \n");
	scanf("%f",&salario);
	
	
	if(letra == 'A'){
		bonus = salario + (salario * 0.15);
		printf("Bonus de 15%, Salario:  %f",bonus);		
	}else if(letra == 'B'){
		bonus = salario + (salario * 0.10);
		printf("Bonus de 10%, Salario:  %f",bonus);
	}else if(letra == 'C'){
		bonus = salario + (salario * 0.05);
		printf("Bonus de 5%, Salario:  %f",bonus);
	} 

	 
	
	
	return 0;
}
