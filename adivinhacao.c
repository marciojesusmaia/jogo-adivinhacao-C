#include <stdio.h>
#include <stdlib.h>





int main (){
	int numsec = 42;
	double pontos = 1000;
	int chute, erros, tentativas;
	erros = 0;
	tentativas = 1;
	double pontosp = 0;
	
	printf("************************************\n");
	printf("*                                  *\n");
	printf("* Bem vindo ao jogo de adivinhação *\n");
	printf("*                                  *\n");
	printf("************************************\n");
	
		
	while (chute != numsec){

		printf("Qual o seu %d chute?\n", tentativas);
		
		scanf("%d", &chute);
		
			if (chute < 0){
				printf("Somente numeros positivos!!\n");
				exit(1);
			}

			if (chute == numsec){
				printf("\n** Parabens, você acertou! e teve %d erros **\n", erros);
				printf("** Você fez: %.1f pontos! **\n", pontos);
				printf("-- Fim do jogo! --\n");
				break;
						}

			else if (chute > numsec)
				printf("seu chute foi maior!\n");
							 	
			else
				printf("Você chutou um numero menor! tente novamente...\n");
				
			tentativas++;
			erros++;
			pontosp= (chute - numsec)/2.0;
		pontos = pontos - abs(pontosp);
			}
		}
	