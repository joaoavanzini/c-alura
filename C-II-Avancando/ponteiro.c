/*

este programa tem a finalidade de esclarecer dúvidas sobre ponteiros:
	
	main:
	- declaramos c = 10 na função main
	- chamamos um printf para mostrar o resultado da variável e seu inteiro
	- chamamos a função calcula() onde passamos o endereço da variável c

	calcula:
	- a função calcula tem o parâmetro para receber a variável que é passada no step anterior
	-- a partir de agora, a variável C vira o valor do endereço da memória
	- (*c) ++; olha, eu sei que C é o endereço de memória, então vou entrar no valor desse endereço de memória tem, fazendo o ++ por fim
	-- (*c) transforma o valor da variável C (que a partir de agora é um endereço de memória) para o valor que está guardado nesse endereço
	
*/

#include <stdio.h>

void calcula(int* c){
	//int*c <- tipo: endereço de memória de um inteiro
	// ------------ É UM PONTEIRO PARA UM INTEIRO: int* c ------------
	printf("calcula %d %d\n", (*c), c);
	(*c)++; 
	printf("calcula %d %d\n", (*c), c);

}

int main(){
	int c = 10;
	printf("main %d %d\n", c, &c);
	//calcula(c);
	calcula(&c); //passa o endereço de memória para a outra função progredir a solução
	printf("main %d %d\n", c, &c);
}