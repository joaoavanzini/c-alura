#include <stdio.h>
#include <stdlib.h>
#include "fogefoge.h"
#include "mapa.h"

MAPA m;
POSICAO heroi;

void fantasmas(){
	MAPA copia;

	copiaMapa(&copia, &m);

	for(int i = 0; i < m.linhas; i++){
		for(int j = 0; j < m.colunas; j++){
			if(copia.matriz[i][j] == FANTASMA){
				if(ehValida(&m, i, j+1) && ehVazia(&m, i, j+1)){
					andandoNoMapa(&m, i, j, i, j+1);
				}
			}
		}
	}

	liberaMapa(&copia);
}

int acabou(){
	return 0;
}

int ehDirecao(char direcao){
	return direcao == 'a' || direcao == 'w' || direcao == 's' || direcao == 'd';
}

void move(char direcao) {

	if(!ehDirecao(direcao))
		return;

    int proximox = heroi.x;
    int proximoy = heroi.y;

    switch(direcao) {
        case ESQUERDA:
        	proximoy--;
            break;
        case CIMA:
            proximox--;
            break;
        case BAIXO:
            proximox++;
            break;
        case DIREITA:
            proximoy++;
            break;
    }

    if(!ehValida(&m, proximox, proximoy))
    	return;

    if(!ehVazia(&m, proximox, proximoy))
    	return;

    andandoNoMapa(&m, heroi.x, heroi.y, proximox, proximoy);
    heroi.x = proximox;
    heroi.y = proximoy;
}

int main(){

	leMapa(&m);
	encontraMapa(&m, &heroi, HEROI);

	do{
		imprimeMapa(&m);

		char comando;
		scanf(" %c", &comando);
		move(comando);
		fantasmas();
	} while(!acabou());

	liberaMapa(&m);
}