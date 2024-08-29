#include <stdio.h>


int main(){
	
	float peso , altura, IMC;
	
	printf("Digite seu peso:  \n");
	scanf("%f",&peso);
	
	printf("Digite sua altura:  \n");
	scanf("%f",&altura);
	
   IMC = peso/(altura*altura);
   
   
   if(IMC <= 16.9 ){
   	
   		printf("Muito Abaixo do Peso, IMC = %f",IMC);
   }else{
   		if(IMC <= 18.4){
   			
			printf("Abaixo do Peso, IMC = %f",IMC);
		   }else{
		   	
		   		if(IMC <= 24.9){
		   			
		   			printf("Peso Normal, IMC = %f",IMC);
		   			
				   } else {
				   		if(IMC <= 29.9){
				   			
				   			printf("Acima do Peso, IMC = %f",IMC);
				   			
						   }else{
						   		if(IMC <= 34.9){
						   			printf("Obesidade Grau 1, IMC = %f",IMC);
						   			
								   }else{
								   		if(IMC <= 40){
								   			printf("Obesidade Grau 2, IMC = %f",IMC);
								   			
										   }else{
										   	if(IMC > 40 ){
										   		printf("Obesidade Grau 3, IMC = %f",IMC);
											   }
											
										   }
								   }
						   	
						   	
						   }
				   
				   }
		   }
   	
   	
   }
	
	return 0;
	
	
}
