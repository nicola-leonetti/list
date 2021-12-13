#include "src/list.h"

int main(void)
{
    list l; 
    l = emptylist(); 

    printf("%d\n", empty(l));

    l = cons(3, l);
    l = cons(4, l);
    l = cons(5, l);
    
    printList(l);

    printElement(head(l));
    printList(tail(l));

    return 0;
}