#include <stdio.h>

int main (){
	printf("************************************\n");	
	printf("* Bem vindo ao jogo de adivinhação *\n");
	printf("************************************\n");
	
	int numsec = 42;
	int chute, erros;

	
	for (int i = 1;i <= 3; i++){
	printf("Qual o seu chute?\n");
	scanf("%d", &chute);
		
	if (chute == numsec)
		printf("** Parabens, você acertou! **\n");
	
	else{
		if(chute > numsec)
			printf("Seu chute foi maior que o numero secreto!");
		else
			printf("seu numero foi menor que o numeri secreto!");
		}
	}
	printf(" Fim do jogo! ");
}