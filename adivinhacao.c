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
	int chute, erros, tentativas;
	erros = 0;
	tentativas =1;
	//menor = chute < numsec;
	
	
	while (chute != numsec){
	printf("Qual o seu %d chute?\n", tentativas);
	scanf("%d", &chute);
		if (chute < 0){
			printf("Somente numeros positivos!!\n");
			exit(1);
		}
		
		if (chute == numsec){
			printf("\n** Parabens, você acertou! **\n");
					}
	
		else {
			if(chute > numsec){
				printf("Você chutou um numero maior! tente novamente...\n");
				erros++;
					}
		else{
				printf("Você chutou um numero menor! tente novamente...\n");
				erros++;
			}
		}
		tentativas++;
	}
	printf("** Você teve %d erros! **\n\n", erros);
	printf("-- Fim do jogo! --\n");
	
	}
	