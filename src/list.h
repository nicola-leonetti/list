#ifndef LIST_H
#define LIST_H

#include "element.h"

typedef struct list_element {
	element value;
	struct list_element  *next;
} item;

typedef item *list;

// Inizializza una lista vuota
list emptyList(void);

// Ritorna 1 se la lista è vuota, 0 altrimenti
int empty(list l);

// Aggiunge un elemento IN TESTA alla lista
list cons(element e, list l);

// Ritorna il valore del primo elemento della lista
element head(list l);

// Ritorna una lista che parte dal secondo elemento della lista data in input
list tail(list l);

// Stampa a schermo la lista passata come parametro, su più righe
// void printList(list l);

// Libera lo spazio in memoria utilizzato dalla lista l
void freeList(list l);

// Ritorna 0 se l'elemento è presente nella lista, 1 altrimenti
// int member(element el, list l);

//list insord_p(element el, list l);

#endif
