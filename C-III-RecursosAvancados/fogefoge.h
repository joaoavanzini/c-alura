void liberaMapa();
void leMapa();
void alocaMapa();

void move(char direcao);
int acabou();
void imprimeMapa();

struct mapa{
	char** matriz;
	int linhas;
	int colunas;
};

typedef struct mapa MAPA; //podemos definir um apelido para o struct, como se fosse criar uma variavel simples: int i