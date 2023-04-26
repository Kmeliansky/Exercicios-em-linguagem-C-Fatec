// simulado 4 da prova

#include<stdio.h>

int main () {
	
	float celsius =0, fah =0;
	
	printf("digite a temperatura em Fahrenheits: ");
	scanf("%f", &fah);
	
	celsius= (fah-32)*5/9;
	
	printf("A temperatura convertira para celsius e %.2f", celsius);
	
	
	return 0;
}
