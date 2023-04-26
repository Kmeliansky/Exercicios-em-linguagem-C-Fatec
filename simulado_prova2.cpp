//simulado 2 da prova

#include<stdio.h>

int main (){
	
	int cod_prod = 0;
	
	printf("Digite o codigo de origem do produto: ");
	scanf("%d",&cod_prod);
	
	if(cod_prod ==1){
		printf("Codigo do produto: Sul ");
	}
	else if(cod_prod ==2){
		printf("Codigo do produto: Norte");
	}
	else if(cod_prod ==3){
		printf("Codigo do produto: Leste");
	}
	else if(cod_prod==4){
		printf("Codigo do produto: Oeste ");
	}
	else if(cod_prod==5){
		printf("Codigo do produto: Nordeste");
	}
	else if(cod_prod==6){
		printf("Codigo do produto: Sudeste ");
	}
	else if(cod_prod==7){
		printf("Codigo do produto: Centro-Oeste");
	}else if(cod_prod==8){
		printf("Codigo do produto: Noroeste ");
	}else{
		printf("Codigo do produto: O produto é importado");
	}
	return 0;
}
