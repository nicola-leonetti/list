#include "element.h"

// // 0 se sono uguali, -1 se il primo è minore, 1 se il primo è maggiore
// int compare(element e1, element e2)
// {
//     if (e1 == e2) {
//         return 0;
//     }
//     else if (e1 < e2) {
//         return -1;
//     } 
//     else {
//         return 1;
//     }
// } 

// // Stampa a schermo UN SOLO element e va a capo
// void printElement(element e) 
// {
//     printf("[ %d ]\n", e);
// }

// // Stampa a schermo un array di element
// void printElementArray(element e[], int dim)
// {
//     int i;
//     printf("[INIZIO ARRAY]\n");
//     for (i = 0; i < dim; i++) {
//         printElement(e[i]);
//     }
//     printf("[FINE ARRAY]\n");
// }

// void scambia(element *e1, element *e2)
// {
//     element tmp = *e1;
//     *e1 = *e2;
//     *e2 = tmp;
// }

// // Ritorna la posizione del massimo dell'array
// int trovaPosMax(element e[], int dim)
// {
//     int i, posMax;
//     posMax = 0;

//     for (i = 1; i < dim; i++) {
//         if (compare(e[posMax], e[i]) < 0) {
//             posMax = i;
//         }
//     }

//     return posMax;
// }

// // Inserisce un elemento in un array, preservando l'ordine
// void insOrd(element e[], int pos)
// {
//     int i;
//     element x;
//     i = pos - 1;
//     x = e[pos];

//     while (i >= 0 && (compare(x, e[i]) < 0)) {
//         // Crea lo spazio per inserire il nuovo elemento
//         e[i + 1]= e[i]; 
//         i--;
//     }
//     // Inserisce il nuovo elemento
//     e[i + 1] = x; 
// }

// // Fonde insieme due array di element
// void merge(element e[], int i1, int i2, int fine, element eout[])
// {
//     int i, j, k;
//     i = i1; 
//     j = i2; 
//     k = i1;

//     while (i <= i2 - 1 && j <= fine) {
//         if (compare(e[i], e[j]) < 0 ) {
//             eout[k] = e[i++];
//         }
//         else {
//             eout[k] = e[j++];
//         }
//         k++;
//     }

//     while (i <= i2 - 1) { 
//         eout[k] = e[i++];
//         k++;
//     }

//     while (j <= fine) {
//         eout[k] = e[j++];
//         k++;
//     }

//     for (i = i1; i <= fine; i++){
//         e[i] = eout[i];
//     }
// }

// // Funzione ricorsiva chiamata da 'quickSort', che funge da interfaccia
// void quickSortR(int e[], int iniz, int fine)
// {
//     int i, j, iPivot, pivot;
//     if (iniz < fine) {
//         i = iniz;
//         j = fine;
//         iPivot = fine;
//         pivot = e[iPivot];

//         // Trova la posizione del pivot
//         do {
//             while (i < j && (compare(e[i], pivot) <= 0)) {
//                 i++;
//             } 
//             while (j > i && (compare(e[j], pivot) >=0)) {
//                 j--;
//             }
//             if (i < j) {
//                 scambia(&e[i], &e[j]);
//             }
//         } while (i < j);

//         // Determinati i due sottoinsiemi, posiziona il pivot
//         if (i != iPivot && (compare(e[i], e[iPivot]) != 0)) {
//             scambia(&e[i], &e[iPivot]);
//             iPivot = i;
//         }

//         // Ricorsione sulle sottoparti, se necessario
//         if (iniz < iPivot - 1) {
//             quickSortR(e, iniz, iPivot - 1);
//         }
//         if (iPivot + 1 < fine) {
//             quickSortR(e, iPivot + 1, fine);
//         }
//     }
// }

// // Naive sort (ordine crescente)
// void naiveSort(element e[], int dim)
// {
//     int p;

//     while (dim > 1) {
//         p = trovaPosMax(e, dim);
//         if (p < dim - 1) {
//             scambia(&e[p], &e[dim - 1]);
//         }
//     dim--;
//     }
// }

// // Bubble sort (ordine crescente)
// void bubbleSort(element e[], int dim)
// {
//     int i, ordinato;
//     ordinato = 0;

//     while (dim > 1 && !ordinato) {
//         ordinato = 1;
//         for (i = 0; i < dim - 1; i++) {
//             if (compare (e[i], e[i + 1]) > 0) {
//                 scambia(&e[i], &e[i+1]);
//                 ordinato = 0;
//             }
//         }
//         dim--;
//     }
// }

// // Insert sort o ordinamento per Inserzione (ordine crescente)
// void insertSort(element e[], int dim)
// {
//     int k;
//     for (k = 1; k < dim; k++) {
//         // Al passo k, la demarcazione fra i due array è alla posizione k
//         // Ovvero, k è il primo elemento del nuovo array
//         insOrd(e, k);
//     }
// }

// // Merge sort o ordinamento per fusione (ordine crescente)
// // first e last sono l'indice (NON il posto) del primo e dell'ultimo elemento dell'array. Per esempio first = 0 e last = DIM - 1
// // ATTENZIONE!! eout va allocato dinamicamenbte usando la dimensione dell'array da ordinare e
// //              va liberato con free dopo averlo usato!!!
// void mergeSort(element e[], int first, int last, element eout[])
// {
//     int mid;

//     if (first < last) {
//         mid = (last + first) / 2;
//         mergeSort(e, first, mid, eout);
//         mergeSort(e, mid + 1, last, eout);
//         merge(e, first, mid + 1, last, eout);
//     }
// }

// // Quick sort (ordine crescente)
// void quickSort(element e[], int dim)
// {
//     quickSortR(e, 0, dim - 1);
// }