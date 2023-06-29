#include <stdio.h>
#define MEQUEDO 0

// Control de secuencia bloque while

// while(condicion){
// codigo que se ejecuta mientras la condicion sea verdadera, por mas que termine el codigo si la condicion sigue siendo verdadera se va a seguir ejecutando
// }

// a=10;
// while(a){
//     printf("%d", a);
//     a--;
// }

// do{
//     //codigo a ejecutar mientras la condicion sea verdadera. Hace y despues pregunta
// }while(condicion);


// int main(void){
//     int base, altura, area, control;
//     printf("ingrese un valor");
//     do{
//         scanf("%d", &base);
//         if(base<=0) printf("No ingreses valores negativos please\n");
//     }while(base<=0);
//     printf("ingrese la altura\n");

//     do{
//         scanf("%d", &altura);
//         if(altura<=0)printf("no ingreses valores negativos please\n");
//     }while(altura<=0);
//     area=base*altura;
//     printf("El area del rectangulo vale: %d\n",area);
//     printf("presione 0 para volver a calcular 1 para salir");
//     scanf("%d", &control);
//     }

//=======================================================//

//CICLO INFINITO

//while(1){
    //bucle infinito
//}

//for(;;){
    //bucle infinito
//}

//=======================================================//

//CICLO FOR 

// for(inicializacion; condicion; incremento){
//     //codigo a ejecutar mientras la condicion sea verdadera, la inicializacion se ejecuta una sola vez al principio y el incremento se ejecuta al final de cada iteracion del ciclo 
// }

// for(i=0; i<10; i++){ //se inicia la variable i en 0, se ejecuta el codigo mientras i sea menor a 10 y se incrementa i en 1 cada vez que se ejecuta el codigo
//     printf("%d", i);
// }

//el mismo codigo en while que en for
// i=0:
// while(i<10){
//     printf("%d", i);
//     i++;
// }
// for(i=0; i<10; i++){
//     printf("%d", i);
// }

// int main (){
//     int valor, i , resultado;
//     printf("ingrese un valor\n");
//     scanf("%d", &valor);
//     for(i=0; i<=10; i++){
//         resultado=valor*i;
//         printf("%d x %d = %d\n", valor, i, valor*i);
//     }
//     return 0;
// }

//=======================================================//

//BREAK y CONTINUE

// break: rompe el ciclo en el que se encuentra y continua con el codigo que sigue al ciclo
// continue: rompe la iteracion actual del ciclo y continua con la siguiente iteracion

// int main (){
//     int valor, i , resultado;
//     printf("ingrese un valor\n");
//     valor=5;
//     //scanf("%d", &valor);
//     for(i=0; i<=10; i++){
//         resultado=valor*i;
//         if(i==3) {
//             printf("no imprimo el 3\n");
//             continue;
//             }
//         printf("%d x %d = %d\n", valor, i, resultado);
//     }
//     return 0;
// }

// int main (){
//     int valor, i , resultado;
//     printf("ingrese un valor\n");
//     valor=5;
//     //scanf("%d", &valor);
//     for(i=0; i<=10; i++){
//         resultado=valor*i;
//         if(i==3) {
//             printf("me voy en 3\n");
//             break;
//             }
//         printf("%d x %d = %d\n", valor, i, resultado);
//     }
//     return 0;
// }

//=======================================================//

//Hacemos una calculadora

int main (){
    float op1, op2;
    int operacion;
    printf ("ingrese el primer operando\n");
    scanf("%f", &op1);
    printf ("ingrese el segundo operando\n");
    scanf("%f", &op2);
    printf("ingrese la operacion que desea realizar\n");
    printf("1. suma\n 2. resta\n 3. multiplicacion\n 4. division\n");
    scanf("%d", &operacion);
    switch (operacion){
        case 1:
            printf("el resultado de la suma es: %f\n", op1+op2);
            break;
        case 2:
            printf("el resultado de la resta es: %f\n", op1-op2);
            break;
        case 3:
            printf("el resultado de la multiplicacion es: %f\n", op1*op2);
            break;
        case 4:
            printf("el resultado de la division es: %f\n", op1/op2);
            break;
        default:
            printf("no ingreso una operacion valida\n");
            break;
    }
    
    printf("desea hacer otra operacion?\n");
    printf("1. si\n 2. no\n");
    scanf("%d", &operacion);
    switch (operacion){
        case 1:
            main();
            break;
        case 2:
            printf("gracias por usar la calculadora\n");
            break;
        default:
            printf("no ingreso una opcion valida\n");
            break;
    }
    return 0;
}

//===============================================//

//Cast (molde) 

// es una conversion de un tipo de dato a otro tipo de dato
//por ejemplo si queremos que un numero entero se convierta en un numero flotante podemos hacer lo siguiente:

// int a=10;
// float b;
// b=(float)a; //casteo a float el valor de a y lo guardo en b
// printf("%f", b);
