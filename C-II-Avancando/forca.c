#include <stdio.h>
#include <stdlib.h>

int main(){
	/*

	//ISSO AQUI É LIXO: 

	char letra1 = 'M';
	char letra2 = 'E';
	char letra3 = 'L';
	char letra4 = 'A';
	char letra5 = 'N';
	char letra6 = 'C';
	char letra7 = 'I';
	char letra8 = 'A';

	printf("%c%c%c%c%c%c%c%c\n", letra1, letra2, letra3, letra4, letra5, letra6, letra7, letra8);*/

	/* //COMO GUARDAR AS NOTAS:
	int notas[10];

	notas[0] = 10;
	notas[2] = 9;
	notas[3] = 8;
	notas[9] = 4;

	printf("Notas %d %d %d\n", notas[0], notas[2], notas[3], notas[9]);
	*/

	char palavraSecreta[20];

	sprintf(palavraSecreta, "MELANCIA");

	printf("%s", palavraSecreta);
	/*
	palavraSecreta[0] = 'M';
	palavraSecreta[1] = 'E';
	palavraSecreta[2] = 'L';
	palavraSecreta[3] = 'A';
	palavraSecreta[4] = 'N';
	palavraSecreta[5] = 'C';
	palavraSecreta[6] = 'I';
	palavraSecreta[7] = 'A';
	palavraSecreta[8] = '\0';*/

}