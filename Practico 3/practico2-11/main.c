#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

/*11. Hacer una funci�n que reciba una pila con n�meros de un solo d�gito (es responsabilidad de
quien usa el programa) y que transforme esos d�gitos en un n�mero decimal. Por ejemplo, la
pila:

1     Debe retornar el n�mero: 14675
4
6
7
5   */

int funcionLoca (Pila dada)
{
    Pila aux, aux2;
    inicpila(&aux);

    int decimal = 0;
    int multiplicador = 1;

    while (!pilavacia(&dada))
    {
        decimal = decimal + (tope(&dada)* multiplicador);
        multiplicador = multiplicador * 10;

        apilar(&aux, desapilar(&dada));
    }

    return decimal;

}

int f1 (Pila dada)
{
    Pila aux;
    inicpila(&aux);
    int d = 0;
    int m = 1;

    while (!pilavacia(&dada))
    {
        d = d + (tope(&dada)* m);
        apilar(&aux, desapilar(&dada));
        m = m * 10;
    }
    return d;
}

int main()
{
    Pila dada;
    inicpila(&dada);
    apilar(&dada, 1);
    apilar(&dada, 3);
    apilar(&dada, 2);
    apilar(&dada, 8);
    apilar(&dada, 9);
    mostrar(&dada);

    return 0;
}
