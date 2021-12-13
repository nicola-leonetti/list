#include "element.h"

int compare(element e1, element e2)
{
    if (e1 == e2) {
        return 0;
    }
    else if (e1 < e2) {
        return -1;
    } 
    else {
        return 1;
    }
} 

// Stampa a schermo UN SOLO element e va a capo
void printElement(element e) 
{
    printf("[ %d ]\n", e);
}