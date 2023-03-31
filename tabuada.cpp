/***************************************************************
*                                                              *
* esse programa realizara o calculo de uma tabuada e outra     *
* tabuada porem invertida com numeros informadas pelo usuario  *
*                                                              *
****************************************************************/

//bilbioteca padrao para entrada e saida
#include<stdio.h>
// biblioteca com a função internas do system
#include<stdlib.h>

//função principal do programa
int main(){

	//declaração das variavies
	int i, j, n, resp;
	
	//inicialização das variaveis:
	i = 1;
	j = 10;
	
	//entrada da informação pelo teclado e armazenamento na variavel
	printf("digite o numero para saber a tabuada: ");
	scanf("%d", &n);
	
	//laço de repetição para o processamento da tabuada
	while(i<=10){
		//calculo
		resp = i * n;
		
		//saida da informação processada
		printf("%d * %d = %d \n", n,i,resp);
		
		//incremento do contador
		i++;
	}
	
	system("PAUSE");
	
	//retorna o valor da função, no caso do tipo inteiro e 0
	return 0;
}
