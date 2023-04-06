#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cuadradoDeNumero (int Numero);
void cuadradoDeNumeroPuntero(int *Numero);

void main(){
    int x = 3;
    int otraVariable;
    int *punteroX = &x;
    printf("El numero es: %d", x);
    x = cuadradoDeNumero(x);
    printf("\nEl cuadrado de x es: %d", x);
    cuadradoDeNumeroPuntero(punteroX);
    printf("\nLa variable después de la operación en la función es x = %d", x);
    printf("\nIngrese un numero entero aleatorio: ");
    scanf("%d",&otraVariable);
    printf("La variable ingresada es: %d \nSu direccion de memoria es: %p", otraVariable, &otraVariable);
}

int cuadradoDeNumero(int Numero){
    return (Numero*Numero);
}
void cuadradoDeNumeroPuntero(int *Numero){
    *Numero *= *Numero;
    printf("\nEl cuadrado de x es: %d", *Numero);
}