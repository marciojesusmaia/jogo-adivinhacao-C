#include <stdio.h>
#include <stdlib.h>

int main (){
	printf("************************************\n");	
	printf("* Bem vindo ao jogo de adivinhação *\n");
	printf("************************************\n");
	
	int numsec = 42;
	int chute, erros;
	erros = 0;
	
	for (int i = 1;i <= 3; i++){
	printf("Qual o seu chute?\n");
	scanf("%d", &chute);
		
	if (chute == numsec){
		printf("** Parabens, você acertou! **\n");
		printf("** Você teve %d erros! **\n", erros);
		printf("** Fim do jogo! **\n");
		exit(1);
		}
	
	else{
		if(chute > numsec){
			printf("Seu chute foi maior que o numero secreto!");
			erros++;
		}
		else{
			printf("seu numero foi menor que o numeri secreto!");
			erros++;
		}
		}
	}
	printf(" Fim do jogo!\n ");
}