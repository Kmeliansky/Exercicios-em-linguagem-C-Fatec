/***************************************************************
*                                                              *
* esse programa realizara o calculo de uma tabuada e outra     *
* tabuada porem invertida com numeros informadas pelo usuario  *
*                                                              *
****************************************************************/

//bilbioteca padrao para entrada e saida
#include<stdio.h>
// biblioteca com a fun��o internas do system
#include<stdlib.h>

//fun��o principal do programa
int main(){

	//declara��o das variavies
	int i, j, n, resp;
	
	//inicializa��o das variaveis:
	i = 1;
	j = 10;
	
	//entrada da informa��o pelo teclado e armazenamento na variavel
	printf("digite o numero para saber a tabuada: ");
	scanf("%d", &n);
	
	//la�o de repeti��o para o processamento da tabuada
	while(i<=10){
		//calculo
		resp = i * n;
		
		//saida da informa��o processada
		printf("%d * %d = %d \n", n,i,resp);
		
		//incremento do contador
		i++;
	}
	
	system("PAUSE");
	
	//retorna o valor da fun��o, no caso do tipo inteiro e 0
	return 0;
}
