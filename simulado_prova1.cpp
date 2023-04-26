//simulado 1 da prova

#include<stdio.h>

int main(){
	int n1=0, n2=0, opt=0, media=0;
	
	printf("insira a primeira nota:");
	scanf("%d", &n1);
	printf("insira a segunda nota:");
	scanf("%d", &n2);
	printf("insira a nota optativa caso o aluno nao faca, insira -1)");
	scanf("%d", &opt);
	
	if(opt <= 1){
		media = (n1+n2)/2;
	} else if(n1<n2){
		media = (opt + n2)/2;
	} else{
		media = (n1 + opt)/2;
	}
	
	if(media >=6){
		printf("a media final do aluno foi de %d e sua situacao e APROVADO", media);
	} else if(media >=3 & media <6){
		printf("a media final do aluno foi de %d e sua situacao e EXAME", media);
	} else{
		printf("a media final do aluno foi de %d e sua situacao e REPROVADO", media);
	}
	
	
	return 0;
}
