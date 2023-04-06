#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cuadradoDeNumero (int Numero);
void cuadradoDeNumeroPuntero(int *Numero);
void Invertir(int *a, int *b);

void main(){
    int x = 3;
    int otraVariable, primerNumero, segundoNumero;
    int *punteroX = &x;
    printf("El numero es: %d", x);
    //a) Haga una función que devuelva el cuadrado de un número
    x = cuadradoDeNumero(x);
    printf("\nEl cuadrado de x es: %d", x);
    //b) Haga la función anterior, pero devolviendo un tipo void
    cuadradoDeNumeroPuntero(punteroX);
    printf("\nLa variable después de la operación en la función es x = %d", x);
    //c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
    printf("\nIngrese un numero entero aleatorio: ");
    scanf("%d",&otraVariable);
    printf("La variable ingresada es: %d \nSu direccion de memoria es: %p", otraVariable, &otraVariable);
    //d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
    printf("\nIntrese un primer numero a: ");
    scanf("%d", &primerNumero);
    printf("Ingrese el segundo numero b: ");
    scanf("%d", &segundoNumero);
    printf("Los valores ingresados son a: %d y b: %d", primerNumero, segundoNumero);
    Invertir(&primerNumero, &segundoNumero);
    printf("\nLos valores invertidos son a: %d y b: %d", primerNumero, segundoNumero);
    

}

int cuadradoDeNumero(int Numero){
    return (Numero*Numero);
}
void cuadradoDeNumeroPuntero(int *Numero){
    *Numero *= *Numero;
    printf("\nEl cuadrado de x es: %d", *Numero);
}
void Invertir(int *a, int *b){
    int aux = 0;
    aux = *a;
    *a = *b;
    *b = aux;
}