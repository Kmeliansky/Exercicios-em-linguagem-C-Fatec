// simulado 3 da prova

#include<stdio.h>

int main(){
	
	float celsius =0, fah =0;
	
	printf("digite a temperatura em Celsium: ");
	scanf("%f", &celsius);
	
	fah = (9 * celsius + 160)/5;
	
	printf("A temperatura convertira para fahrenheits e %.2f", fah);
	
	return 0;
}
