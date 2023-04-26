//simulado 8 da prova

#include<stdio.h>

int main(){
	
	float peso_ideal=0;
	int sexo = 0, altura =0;
	
	printf("digite a sua altura: ");
	scanf("%d",&altura);
	
	printf("digite o seu sexo: | 1 - feminino | 2 - Masculino |");
	scanf("%d",&sexo);
	
	if(sexo == 1){
		peso_ideal = (62.1*altura) -44.7;
		printf("seu peso ideal eh: %f", peso_ideal);
	} else{
		peso_ideal = (72.7*altura) -58;
		printf("seu peso ideal eh: %f", peso_ideal);
	}
	return 0;
}
