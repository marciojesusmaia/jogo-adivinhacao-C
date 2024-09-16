#include <stdio.h>
#include <stdlib.h>

#define TENTATIVAS 3
int main (){
	
	printf("************************************\n");
	printf("*                                  *\n");
	printf("* Bem vindo ao jogo de adivinhação *\n");
	printf("*                                  *\n");
	printf("************************************\n");
	
	int numsec = 42;
	int chute, erros;
	erros = 0;
	//menor = chute < numsec;
	int maior = chute > numsec;
	
	for (int i = 1;i <= TENTATIVAS; i++){
	printf("Qual o seu chute?\n");
	scanf("%d", &chute);
		if (chute < 0){
			printf("Somente numeros positivos!!\n");
			exit(1);
	}
		
	if (chute == numsec){
		printf("** Parabens, você acertou! **\n");
		break;
				}
	
	else if(maior){
			printf("Seu %dº chute foi maior que o numero secreto!\n", i);
			erros++;
				}
	else{
			printf("Seu %dº numero foi menor que o numeri secreto!\n", i);
			erros++;
		}
		}
	printf("** Você teve %d erros! **\n\n", erros);
	printf("Fim do jogo!\n");
	
	}
	