#include <stdio.h>
#include <stdlib.h>

int numero = 0;

int main(){
	printf("Digite o numero para calcular a tabuada!\n");
	scanf("%d", &numero);

	for(int aux = 0; aux <= 10; aux++){
		printf("%d x %d = %d\n", aux, numero, aux * numero);
	}
}