#include <stdio.h>
#include <stdlib.h>

//matriz de 5 x 10 - o +1 no final é o \0
char mapa[200][200+1];
int linhas;
int colunas;

int main(){

	FILE* f;
	f = fopen("mapa.txt", "r");
	if(f == 0){
		printf("Erro na leitura do mapa\n");
		exit(1);
	}

	fscanf(f, "%d %d", &linhas, &colunas);
	printf("linhas %d, colunas %d\n", linhas, colunas);

	////////////////

	int** v = malloc(sizeof(int*) * 5);
	for(int i = 0; i < 5; i++){
		v[i] = malloc(sizeof(int) * 10);
	}
	v[0][0] = 10;
	v[1][2] = 12;
	printf("inteiro alocado %d, %d\n", v[0][0], v[1][2]);
	
	for(int i = 0; i < 5; i ++){
		free(v[i]);
	}
	free(v);

	////////////////

	for(int i = 0; i < 5; i++){
		fscanf(f, "%s", mapa[i]);
	}

	for(int i = 0; i < 5; i++){
		printf("%s\n", mapa[i]);
	}

/*
	for(int i = 0; i < 5; i++){
		for(int j = 0;  j < 10; j++){
			printf("%c", mapa[i][j]);
		}
		printf("\n");
	}
*/

	fclose(f);
}