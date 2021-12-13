# Libreria list.h
Questa libreria implementa l'ADT lista in C. 

## Testare il corretto funzionamento della libreria 
Il file `main.c` è usato come test e non fa parte della libreria.

Per testare la libreria, compiliamo un programma di prova utilizzando clang.
```bash
clang *.c src/*.c -o prova
./prova
```

Se tutto funziona correttamente, l'output dovrebbe essere il seguente:
```
1
[INIZIO LISTA] 
[ 5 ]
[ 4 ]
[ 3 ]
[FINE LISTA] 
[ 5 ]
[INIZIO LISTA] 
[ 4 ]
[ 3 ]
[FINE LISTA] 
```

Infine, per eliminare l'eseguibile creato durante questo processo:
```bash
rm prova
```

## Utilizzo della libreria
Per utilizzare la libreria, è sufficiente spostare tutti i files contenuti nella cartella `src` nella cartella del tuo progetto e utilizzare le funzioni come documentato nel file `list.h`.