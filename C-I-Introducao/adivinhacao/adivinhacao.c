#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main(){
	//imprime cabecalho do nosso jogo
	printf("--------------------------------------\n");
	printf("Bem vindo ao nosso jogo de adivinhacao\n");
	printf("--------------------------------------\n");	

	int numeroSecreto = 42;

	int chute;
	int ganhou = 0;
	int tentativas = 0;

	while(1){
	//for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
		//printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
		printf("Tentativa %d\n", tentativas + 1);
		printf("Qual eh o seu chute?\n");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);

		if (chute < 0){
			printf("Voce nao pode chutar com numeros negativos!\n");
			//i--;
			continue;
		}
		int acertou = (chute == numeroSecreto);
		int maior = chute > numeroSecreto;

		if (acertou){
			printf("Parabens! Voce acertou!\n");
			printf("Jogue de novo, voce eh um bom jogador!\n");	
			//break;
			ganhou = 1;
		}

		else if(maior){
			printf("Seu chute foi maior que o numero secreto!\n");
		}

		else {
			printf("Seu chute foi menor que o numero secreto!\n");
		}
		tentativas++;
	}
	printf("Fim de jogo!\n");
	printf("Voce acertou em %d tentativas!\n", tentativas);
}