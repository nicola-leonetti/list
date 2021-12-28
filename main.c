#include "src/list.h"
#define DIM 9

int main(void)
{
    list l; 
    element arrayDiElementi[DIM] = {-1, 5, 7, 4, -3, -3, 9, 11, -12};

    l = emptyList(); 

    printf("%d\n", empty(l));

    l = cons(3, l);
    l = cons(4, l);
    l = cons(5, l);
    
    printList(l);

    printElement(head(l));
    printList(tail(l));

    printElementArray(arrayDiElementi, DIM);
    // naiveSort(arrayDiElementi, DIM);
    // bubbleSort(arrayDiElementi, DIM);
    // insertSort(arrayDiElementi, DIM);
    //element arrayOrdinato[DIM];
    // mergeSort(arrayDiElementi, 0, DIM - 1, arrayOrdinato);
    quickSort(arrayDiElementi, DIM);
    printElementArray(arrayDiElementi, DIM);

    return 0;
}