#include <stdio.h>
#include <stdlib.h>

int main(){
	//matriz de 5 x 10
	char mapa[5][10+1];

	/*
	mapa[0][0] = '|';
	mapa[4][9] = '@';

	printf("%c %c\n", mapa[0][0], mapa[4][9]);*/

	FILE* f;
	f = fopen("mapa.txt", "r");
	if(f == 0){
		printf("Erro na leitura do mapa\n");
		exit(1);
	}

	for(int i = 0; i < 5; i++){
		fscanf(f, "%s", mapa[i]);
	}

	for(int i = 0; i < 5; i++){
		printf("%s\n", mapa[i]);
	}
	
/*
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 10; j++){
			printf("%c", mapa[i][j]);
		}
		printf("\n");
	}
*/

	fclose(f);
}