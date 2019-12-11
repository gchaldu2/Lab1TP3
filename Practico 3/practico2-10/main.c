#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

/* 10. Hacer una función que calcule el promedio de los elementos de una pila, para ello hacer
tambien una función que calcule la suma, otra para la cuenta y otra que divida. En total son
cuatro funciones, y la función que calcula el promedio invoca a las otras 3.*/

int suma (Pila dada)
{
    Pila aux;
    inicpila(&aux);
    int suma = 0;
    while (!pilavacia(&dada))
    {
        suma = suma + tope(&dada);
        apilar(&aux, desapilar(&dada));
    }
    return suma;
}

int cuenta (Pila dada)
{
    Pila aux;
    inicpila(&aux);
    int cuenta = 0;
    while (!pilavacia(&dada))
    {
        apilar(&aux, desapilar(&dada));
        cuenta ++;
    }
    return cuenta;
}

int divide (int suma, int cuenta)
{
    int cociente = suma / cuenta;
    return cociente;
}

int promedio (Pila dada)
{
    int s = suma(dada);
    int c = cuenta(dada);
    int rta = divide(s,c);
    return rta;
}

int main()
{
    Pila dada;
    inicpila(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);
    printf("Pila ingresada\n");
    mostrar(&dada);

    int aux = promedio(dada);

    printf("Promedio de la pila dada: %d\n", aux);
    return 0;
}
