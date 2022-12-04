# list.h
My implementation of a linked list in C, as described in the book 
"C: How to to Program" by Paul J. Deitel and Harvey M. Deitel.

## Testing
The `main.c` file is used for testing purposes and is not part of the
library. To compile `main.c` with clang, run in the project's folder:

```bash
clang *.c src/*.c -o prova
./prova
```

If everything works as expected, the output should be the following:
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

If you wish, you can remove the `main.c` executable after the program
has finished:

```bash
rm prova
```

## Using the library
In order to use the library, move all the files in the `src` folder in 
your project's main directory.

You may also want to change the code in `src/main.c` to adapt it to your
custom data types.

Please refer to the instructions in the `list.h` file for documentation.
