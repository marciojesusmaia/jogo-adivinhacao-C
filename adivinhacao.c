#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main (){
	int segundos = time(0);
	srand(segundos);
	int numinit = rand();
	int numsec = numinit % 100;
	double pontos = 1000;
	int chute, erros, tentativas, nivel, rodadas;
	erros = 0;
	tentativas = 1;
	double pontosp = 0;
	
	
	printf("************************************\n");
	printf("*                                  *\n");
	printf("* Bem vindo ao jogo de adivinhação *\n");
	printf("*                                  *\n");
	printf("************************************\n\n");
	printf("Qual o nivel de dificuldade você escolhe? \n");
	printf("(1)Facil (2)Medio (3)Dificil\n");
	printf("Escolha: ");
	scanf("%d", &nivel);
	if(nivel == 1)
		   rodadas = 20;
	else if(nivel == 2)
		   rodadas = 15;
	else
		   rodadas = 6;
	
		
	for(int i=1; i<=rodadas;i++){
				printf("tentativas %d, rodadas %d\n", tentativas, rodadas);
				printf("Qual o seu %d chute?\n", tentativas);
			

				scanf("%d", &chute);
					
					if (chute < 0){
						printf("Somente numeros positivos!!\n");
						i--;
						continue;
					}

					if (chute == numsec){
						printf("\n** Parabens, você acertou! e teve %d erros **\n", erros);
						printf("** Você fez: %.1f pontos! **\n", pontos);
						printf("-- Fim do jogo! --\n");
						break;
								}
					else if (i == rodadas){
						printf("Voce perdeu!!\n");
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
	