#include <stdio.h>
#include <stdlib.h>
//Questa funzione studia i tre casi di k (ed i suoi sottocasi): Per ognuno di essi, ad eccezione di k=0, un ciclo inserisci gli elementi
//nella lista mentre un contatore(cont) scorre fino a k e fa inserire gli elementi consecutivi corretti.
//Il tempo speso per questa funzione è lineare mentre la memoria supplementare utilizzata è costante.

struct nodo{
int inf;
struct nodo *succ;
struct nodo *prec;
};
typedef struct nodo nodo;


nodo *Range(nodo *a, int i, int j, int k){
int cont;
nodo *q;

//Mettendo k<j non fa funzionare il caso -1,1,1 e questo deve funzionare
//con il ciclo count spreco n?2 di tempo
if(k>0 && i<j && k<j){
        while(i<j){
            if ( a == NULL ){
            a = malloc(sizeof(nodo));
            a->succ = NULL;
            a->prec = NULL;
            q = a;
        } else{
            q->succ = malloc(sizeof(nodo));
            q->succ->prec = q;
            q = q->succ;
            q->succ = NULL;
        }
        q->inf = i;
        i=i+k;
        }
    }else if(k<0 && i>j && k>j){
        while(i>j){
            cont=0;
            if ( a == NULL ){
            a = malloc(sizeof(nodo));
            a->succ = NULL;
            a->prec = NULL;
            q = a;
        } else{
            q->succ = malloc(sizeof(nodo));
            q->succ->prec = q;
            q = q->succ;
            q->succ = NULL;
        }
        q->inf = i;
        while(cont>k){
                i--;
                cont--;
            }
        }
    }else{
    return NULL;
    }
return a;
}

void Stampa(nodo *a){
nodo *p;
if(a==NULL){
    printf("Lista Vuota\n");

}else{
p=a;
    while(p!=NULL){
        printf("%d",p->inf);
        p=p->succ;
    }
}
}


int main(int argc, char** argv){
nodo *a=NULL;
a=Range(a,atoi(argv[1]),atoi(argv[2]),atoi(argv[3]));
Stampa(a);
return 0;
}

