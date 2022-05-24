typedef struct Elemento{

	int numero;
	struct Elemento *successivo;

}Elemento;

typedef struct Lista{

	Elemento *primo;
}Lista;

Lista* inizializza();
void stampa(Lista *lista);
void inserire(Lista* lista, int nuovoNum);
void elimina(Lista *lista);