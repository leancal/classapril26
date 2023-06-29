// Se desea desarrollar un programa que solicite al usuario ingresar una cantidad determinada de valores. Sin embargo, es importante destacar que únicamente se aceptarán valores numéricos positivos, quedando excluidos los números negativos. Además, se permitirá al usuario ingresar la cantidad de valores que desee.Esa cantidad de númerosdeberá generarse en forma aleatoria, con un rango numérico entre 50 y 150.Se pide:1.Armar una función que determine cuáles el valor máximo del mismo.2.También desarrollar una función que me permita determinar cuántasveces se repitió este máximo.3.Determinar el promedio de los númerosgenerados4.Determinar cuántos  números  primos  se  generaron  durante  la generación de estos números

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, num, max, cantMax, cantPrimos, suma;
    float promedio;
    max=0;
    cantMax=0; 
    cantPrimos=0;
    suma=0;
    printf("Ingrese la cantidad de numeros que desea generar\n");
    scanf("%d", &num);
    for(i=0; i<num; i++){
        int numAleatorio;
        numAleatorio=rand()%101+50;
        printf("%d\n", numAleatorio);
        if(numAleatorio>max){
            max=numAleatorio;
            cantMax=1;
        }
        else if(numAleatorio==max){
            cantMax++;
        }
        if(numAleatorio==2 || numAleatorio==3 || numAleatorio==5 || numAleatorio==7){
            cantPrimos++;
        }
        else if(numAleatorio%2!=0 && numAleatorio%3!=0 && numAleatorio%5!=0 && numAleatorio%7!=0){
            cantPrimos++;
        }
        suma+=numAleatorio;
    }
    promedio=(float)suma/num;
    printf("El numero maximo es %d y se repitio %d veces\n", max, cantMax);
    printf("El promedio es %.2f\n", promedio);
    printf("Se generaron %d numeros primos\n", cantPrimos);
    return 0;
}