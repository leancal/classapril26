//si tiene que ser un numero positivo la variable tiene que ser unsigned int.
// utilizar DEFINE para definir el numero de elementos del array.
// la funcion debe estar definida por un nombre, un tipo de valor de retorno y los parametros que recibe.
// prototipo de una funcion: tipo de parametro que retorna, nombre de la funcion y los parametros que recibe. la cantidad de parametros de retorno es unica, puede retornar 1 solo tipo de parametro o ninguno si es void. No hay limite en cuanto a la cantidad de parametros de recepcion de una funcion, si no hay ninguno se coloca void.
//Hay dos formas de usar una funcion

#include <stdio.h>
#define BASE 0
#define ALTURA 1
float pedir_dato(float *, float *); // se hace el prototipo de la funcion para que el compilador sepa que existe la funcion y no tire error. Ahora utilizando punteros para que la funcion pueda modificar los valores de las variables base y altura.
float calculo (float, float);
void imprimir_resultado(float);

int main(void){
    float base, altura, area;
    pedir_dato (&base, &altura);// se llama a la funcion para que se ejecute, con "&" se le pasa la direccion de memoria de la variable base y altura para que la funcion pueda modificar los valores de las variables base y altura.
    area = calculo(base, altura);
    imprimir_resultado(area);
    return 0;
}

float pedir_dato(float * base, float * altura){ // se hace la funcion para que el compilador sepa que existe la funcion y no tire error. Utilizando punteros para que la funcion pueda modificar los valores de las variables base y altura.
    do {
        printf("Ingrese la base del triangulo: ");
        scanf("%f", base);
    }   if (*base <= 0){
            printf("La base debe ser mayor a 0\n");
    } 
    while (*base <= 0);
    do {
        printf("Ingrese la altura del triangulo: ");
        scanf("%f", altura);
    }   if (*altura <= 0){
            printf("La altura debe ser mayor a 0\n");
    }
    while (*altura <= 0);



}

float calculo (float base, float altura){
    float area;
    area = (base * altura) / 2;
    return area;
}

void imprimir_resultado(float area){
    printf("El area del triangulo es: %.2f\n", area);
}