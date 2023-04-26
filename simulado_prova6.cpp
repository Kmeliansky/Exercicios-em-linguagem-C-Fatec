//simulado 6 da prova

#include<stdio.h>

int main (){
	int n1=0, n2=0, impar=0, par=0;
	float media =0, total=0;
	printf("digite o primeiro valor: ");
	scanf("%d",&n1);
	printf("digite o segundo numero: ");
	scanf("%d",&n2);
	
	while(n1 <= n2){
		if(n1%2 == !0){
			impar++;
			total = total + n1;
		}
		else{
			par++;
		}
		
	n1++;	
	}
	
	media = total/impar;
	
	printf("a quantidade de valores impares foram: %d e a media deles foram: %f", impar, media);
	return 0;
} 
