#include <stdio.h>
#include <stdlib.h>

void funcion(void) { /*se define la funcion del tipo void, que no devuelve un valor*/
    static int x = 0; /*declara la variable x del tipo static, que se guarda en la memoria estatica*/
    x++; /*se incrementa por uno x*/
    printf("%d\n", x); /*se imprime x*/
}

int main(void)
{
    funcion(); /*cuando la funcion no recibe nada, se implementa lo anterior*/
    funcion(); /*y para cada llamada, se reemplaza el valor anterior y se lo incrementa por uno.*/
    funcion();
    funcion();
    funcion();
    funcion();

    return EXIT_SUCCESS; /*se imprime cada numero*/
}
