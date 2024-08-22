#include <stdio.h>
double soma (double n1, double n2);
double sub (double n1, double n2);
double mult(double n1, double n2);
double div(double n1, double n2);
double media(double n1, double n2);
int main(){							
 	double valor1, valor2;
	char op;
		printf("Escolha uma operacao: \n+ adicao\n- subtracao\n/ divisao\n* multiplicacao\n $ media \n");
		scanf("%c",&op);
		printf("Digite o primeiro numero: ");
		scanf("%lf",&valor1);
		printf("Digite o segundo numero: ");
		scanf("%lf",&valor2);

		
		if(op == '+'){
		printf("A Soma dos valores e: %.2f \n ", soma(valor1,valor2));
	}  else if (op == '-') {
		printf("A Subtracao dos valores e: %.2f \n",sub(valor1,valor2));
	} else if (op == '*'){
		printf("A Multiplicacao dos valores e: %.2f \n",mult(valor1,valor2));
	} else if (op == '/'){
		printf("A Divisao dos valores e: %.2f \n",div(valor1,valor2));
} else if (op == '$'){
	printf("A Media dos valores e: %.2f \n",media(valor1,valor2));
}	 
   
   return 0;
}
double sub (double n1, double n2){
	return n1 - n2;
}
double soma (double n1, double n2){
	return n1 + n2;
}
double mult (double n1, double n2){
	return n1 * n2;
}
double div (double n1, double n2){
	return n1 / n2;
} 
double media (double n1, double n2){
	return (n1 + n2)/2;
}

