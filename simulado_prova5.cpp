//simulado 5 da prova

#include<stdio.h>

int main (){
	int comprimento =0, largura =0, altura =0, volume =0;
	
	printf("Digite o comprimento: ");
	scanf("%d",&comprimento);
	printf("Digite a largura: ");
	scanf("%d",&largura);
	printf("digite a altura: ");
	scanf("%d", &altura);
	
	volume = (comprimento * largura * altura);
	
	printf("O volume da area calculada foi: %d", volume);
	return 0;
}
