/**
 * @file clase26abril.c
 * @author Leandro Calvet 
 * @brief 
 * @version 0.1
 * @date 2023-04-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#define MEQUEDO 0
    //doxygen es para documentar nuestro codigo

    //realizar un programa al que se le ingresen temperaturas por teclado (10-definirlo con el pre-procesador), no se pueden ingresar temperaturas negativas, temperaturas mayores a 180 grados ni letras y calcule: temperatura promedio, temperatura maxima y temperatura minima, veces que la temperatura estuvo entre 10 y 25, veces que la temperatura estuve entre 30 y 40. El programa no debera cerrarse a menos que el usuario lo quiera.

    // int main(void){
    //     int temp, tempMax, tempMin, tempProm, temp1025, temp3040, control, i;// primero declaro las variables que voy a usar
    //     tempMax=0; 
    //     tempMin=180;
    //     tempProm=0;
    //     temp1025=0;
    //     temp3040=0;
    //     for(i=0; i<10; i++){ // este for es para que se repita 10 veces, primero se inicializa la variable i en 0, luego se pone la condicion, y luego se incrementa en 1
    //         printf("Ingrese una temperatura\n");
    //         scanf("%d", &temp);
    //         if(temp<0 || temp>180){
    //             printf("No ingreses temperaturas negativas ni mayores a 180\n");
    //             i--;// esta linea es para que no cuente el ciclo como terminado
    //         }
    //         else{
    //             if(temp>tempMax) tempMax=temp; 
    //             if(temp<tempMin) tempMin=temp;
    //             if(temp>=10 && temp<=25) temp1025++;
    //             if(temp>=30 && temp<=40) temp3040++;
    //             tempProm+=temp;
    //         }
    //     }
    //     tempProm/=10;
    //     printf("La temperatura maxima fue: %d\n", tempMax);
    //     printf("La temperatura minima fue: %d\n", tempMin);
    //     printf("La temperatura promedio fue: %d\n", tempProm);
    //     printf("La temperatura estuvo entre 10 y 25 grados %d veces\n", temp1025);
    //     printf("La temperatura estuvo entre 30 y 40 grados %d veces\n", temp3040);
    //     printf("Presione 0 para volver a calcular o 1 para salir\n");
    //     scanf("%d", &control);
    //     while(control!=MEQUEDO){
    //         printf("Presione 0 para volver a calcular o 1 para salir\n");
    //         scanf("%d", &control);
    //     }
    //     return 0;
    // }

    //realizar un programa al que se le ingresen temperaturas por teclado (hasta que ingrese el numero 200 o mayor o hasta que ingrese 30 numeros), no se pueden ingresar temperaturas negativas ni temperaturas mayores a 180 grados y calcule: temperatura promedio, temperatura maxima y temperatura minima, veces que la temperatura estuvo entre 10 y 25, veces que la temperatura estuve entre 30 y 40. El programa no debera cerrarse a menos que el usuario lo quiera.
    
 int main (){
    int temp, tempMax, tempMin, tempProm, temp1025, temp3040, control, i;// primero declaro las variables que voy a usar
    tempMax=0; 
    tempMin=180;
    tempProm=0;
    temp1025=0;
    temp3040=0;
    i=0;
    while(i<30 && temp<200){
        printf("Ingrese una temperatura\n");
        scanf("%d", &temp);
        if(temp<0 || temp>180){
            printf("No ingreses temperaturas negativas ni mayores a 180\n");
        }
        else{
            if(temp>tempMax) tempMax=temp; 
            if(temp<tempMin) tempMin=temp;
            if(temp>=10 && temp<=25) temp1025++;
            if(temp>=30 && temp<=40) temp3040++;
            tempProm+=temp;
            i++;
        }
    }
    tempProm/=i;
    printf("La temperatura maxima fue: %d\n", tempMax);
    printf("La temperatura minima fue: %d\n", tempMin);
    printf("La temperatura promedio fue: %d\n", tempProm);
    printf("La temperatura estuvo entre 10 y 25 grados %d veces\n", temp1025);
    printf("La temperatura estuvo entre 30 y 40 grados %d veces\n", temp3040);
    printf("Presione 0 para volver a calcular o 1 para salir\n");
    scanf("%d", &control);
    while(control!=MEQUEDO){
        printf("Presione 0 para volver a calcular o 1 para salir\n");
        scanf("%d", &control);
    }
    return 0;
 }