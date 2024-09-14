#include <stdio.h>

int main (){
	printf("************************************\n");	
	printf("* Bem vindo ao jogo de adivinhação *\n");
	printf("************************************\n");
	
	int numsec = 42;
	int chute, erros;
	erros = 0;
	
	printf("Qual o seu chute?\n");
	scanf("%d", &chute);
		
	if (chute == numsec)
		printf("** Parabens, você acertou! \n**");
	else if(chute > numsec)
		printf("** Você chutou %d! Eu pensei em um numero menor! \n**", chute);
	else
		printf("** Você chutou %d! eu pensei em um numero menor! \n**", chute);
}