//escribir una funcion que reciba como parametro un vector de enteros y su tamano definido por usted y que calcule la suma de todos los elementos del vector (utizando funciones). Tambien debe calcular el promedio de los elementos del vector (utilizando funciones).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// #define TAM 10

// int main(){
//     int vector[TAM];
//     int i;
//     int suma = 0;
//     float promedio = 0;
//     for (i = 0; i < TAM; i++){
//         printf("Ingrese un numero: ");
//         scanf("%d", &vector[i]);
//     }
//     for (i = 0; i < TAM; i++){
//         suma = suma + vector[i];
//     }
//     promedio = (float)suma / TAM;
//     printf("La suma de los elementos del vector es: %d\n", suma);
//     printf("El promedio de los elementos del vector es: %.2f\n", promedio);
//     return 0;
// }

//ejemplo en clase, como definir un string



int main(void){
    char text[] = "Hola";
    int i;
    printf("%s\n", text); // esto es lo mismo que lo de abajo
    // for (i = 0; text[i] != '\0'; i++){
    //     printf("%c\n", text[i]);
    // }
}