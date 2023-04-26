// simulado 7 da prova

#include<stdio.h>

int main(){
	int sim =0, nao=0, opc=0, i=0;
		
	while(i <10){
		
	printf("De acordo com sua experiencia, pressione 0 para sim e 1 para nao ");
	scanf("%d",&opc);
		
		if(opc ==0){
			sim++;
		}else{
			nao++;
		}
		i++;
	}
	printf("o total de pessoas que responderam sim: %d",sim);
	printf("o total de pessoas que respoderam nao: %d",nao);
	
	return 0;
}
