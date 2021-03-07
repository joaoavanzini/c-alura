struct mapa{
	char** matriz;
	int linhas;
	int colunas;
};

typedef struct mapa MAPA; //podemos definir um apelido para o struct, como se fosse criar uma variavel simples: int i

void liberaMapa(MAPA* m);
void leMapa(MAPA* m);
void alocaMapa(MAPA* m);
void imprimeMapa(MAPA* m);