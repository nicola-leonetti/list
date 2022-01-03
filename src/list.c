#include "list.h"

list emptyList(void)
{
	return NULL;
}

int empty(list l)
{
	return l == NULL;
}

list cons(element e, list l)
{
	list t;
	t = (list) malloc(sizeof(item));
	t->value = e;
	t->next = l;
	return t;
}

element head(list l)
{
	if (empty(l)) {
        exit(-1);
    }
	else {
        return (l->value);
    }
}

list tail(list l)
{
	if (empty(l)) {
        exit(-1);
    }
	else {
        return (l->next);
    }
}

// void printList(list l) {
// 	element temp;
//     printf("[INIZIO LISTA] \n");
// 	while (!empty(l)) {
// 		temp = head(l);
//         printElement(temp);
//         l = tail(l);
// 	}
//     printf("[FINE LISTA] \n");
// }

void freeList(list l) {
	if (!empty(l)) {
		freeList(tail(l));
		free(l);
	}
}

// int member(element el, list l) {
// 	int result = 0;
// 	while (!empty(l) && !result) {
// 		result = !compare(el, head(l));
// 		if (!result)
// 			l = tail(l);
// 	}
// 	return result;
// }

//
//list insord_p(element el, list l) {
//	list pprec = NULL, patt = l, paux;
//	int trovato = 0;
//
//	while (patt != NULL && !trovato) {
//-		if (el.costo > patt->value.costo)
//			trovato = 1;
//		else {
//			pprec = patt;
//			patt = patt->next;
//		}
//	}
//	paux = (list)malloc(sizeof(item));
//	paux->value = el;
//	paux->next = patt;
//	if (patt == l)
//		return paux;
//	else {
//		pprec->next = paux;
//		return l;
//	}
//}