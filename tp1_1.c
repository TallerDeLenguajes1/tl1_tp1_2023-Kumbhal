#include <stdio.h>

void main(){
    //printf("Hola mundo");
    int x = 10;
    int *puntX = &x;
    printf("El contenido del puntero: %d", *puntX);
    printf("\nLa dirección de memoria almacenada por el puntero: %p", puntX);
    printf("\nLa dirección de memoria de la variable: %p", &x);
    printf("\nLa dirección de memoria del puntero: %p", &puntX);
    printf("\nEl tamaño de memoria utilizado por x: %d", sizeof(x));
}