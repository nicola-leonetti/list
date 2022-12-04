#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void freeList(list l) {
	if (!empty(l)) {
		freeList(tail(l));
		free(l);
	}
}

int countElements(list l)
{
	int count; 
	count = 0;
	while(!empty(l)) {
		count++;
		l = tail(l);
	}
	return count;
}