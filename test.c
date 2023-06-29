#include <stdio.h>

int main() {

    int num1, num2, suma, resta, multiplicacion;

    float division;


    // Pedir al usuario dos números enteros

    printf("Ingrese dos números enteros separados por un espacio: ");

    scanf("%d %d", &num1, &num2);


    // Realizar las operaciones aritméticas

    suma = num1 + num2;

    resta = num1 - num2;

    multiplicacion = num1 * num2;

    division = (float) num1 / num2;


    // Mostrar los resultados de las operaciones

    printf("La suma de %d y %d es %d\n", num1, num2, suma);

    printf("La resta de %d y %d es %d\n", num1, num2, resta);

    printf("La multiplicación de %d y %d es %d\n", num1, num2, multiplicacion);

    printf("La división de %d entre %d es %.2f\n", num1, num2, division);


    return 0;

}

