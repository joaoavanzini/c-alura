struct mapa{
	char** matriz;
	int linhas;
	int colunas;
};

typedef struct mapa MAPA; //podemos definir um apelido para o struct, como se fosse criar uma variavel simples: int i

struct posicao{
	int x;
	int y;
};

typedef struct posicao POSICAO;

void liberaMapa(MAPA* m);
void leMapa(MAPA* m);
void alocaMapa(MAPA* m);
void imprimeMapa(MAPA* m);
void encontraMapa(MAPA* m, POSICAO* p, char c);