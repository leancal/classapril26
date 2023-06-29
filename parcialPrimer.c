#include <stdio.h>

int main() {
    // Definir variables a utilizar 
    int equipo1_puntos = 0;
    int equipo2_puntos = 0;
    int simples = 0;
    int dobles = 0;
    int triples = 0;
    int num_equipo, valor_punto;

    printf("Ingrese los puntos del partido (0 para finalizar):\n");
    // Ingresar los puntos del partido utilizando un bucle while que lo que hace es que se repite hasta que se ingrese un 0. se coloca while (1) para que el bucle se repita infinitamente, y se utiliza un break para que el bucle se termine cuando se ingrese un 0
    while (1) {
        printf("Equipo (1 o 2): ");
        scanf("%d", &num_equipo);

        // Si el numero del equipo es 0, se termina el bucle
        if (num_equipo == 0) {
            break;
        }

        // Si el numero del equipo es distinto de 1 o 2, se imprime un mensaje de error y se vuelve a pedir el numero del equipo
        if (num_equipo != 1 && num_equipo != 2) {
            printf("Equipo inválido. Ingrese nuevamente.\n");
            continue;
        }

        printf("Valor del punto (1, 2 o 3): ");
        scanf("%d", &valor_punto);

        // Si el valor del punto es menor a 1 o mayor a 3, se imprime un mensaje de error y se vuelve a pedir el valor del punto
        if (valor_punto < 1 || valor_punto > 3) {
            printf("Valor del punto inválido. Ingrese nuevamente.\n");
            continue;
        }

        // Se incrementa la cantidad de tiros simples, dobles o triples dependiendo del valor del punto. Si el valor del punto es 1, se incrementa la cantidad de tiros simples, si es 2, se incrementa la cantidad de tiros dobles, si es 3, se incrementa la cantidad de tiros triples
        if (valor_punto == 1) {
            simples++;
        } else if (valor_punto == 2) {
            dobles++;
        } else if (valor_punto == 3) {
            triples++;
        }

        // Se incrementa la cantidad de puntos del equipo 1 o 2 dependiendo del numero del equipo. Si el numero del equipo es 1, se incrementa la cantidad de puntos del equipo 1, si no, se incrementa la cantidad de puntos del equipo 2
        if (num_equipo == 1) {
            equipo1_puntos += valor_punto;
        } else if (num_equipo == 2) {
            equipo2_puntos += valor_punto;
        }

        printf("Puntos del Equipo 1: %d\n", equipo1_puntos);
        printf("Puntos del Equipo 2: %d\n", equipo2_puntos);

        // Se imprime un mensaje dependiendo de que equipo va ganando o si el partido está empatado. Si los puntos del equipo 1 son mayores a los puntos del equipo 2, se imprime que el equipo 1 va ganando, si los puntos del equipo 2 son mayores a los puntos del equipo 1, se imprime que el equipo 2 va ganando, si no, se imprime que el partido esta empatado
        if (equipo1_puntos > equipo2_puntos) {
            printf("Equipo 1 va ganando.\n");
        } else if (equipo2_puntos > equipo1_puntos) {
            printf("Equipo 2 va ganando.\n");
        } else {
            printf("El partido está empatado.\n");
        }
    }

    printf("\n--- Resultados del partido ---\n");
    printf("Puntos del Equipo 1: %d\n", equipo1_puntos);
    printf("Puntos del Equipo 2: %d\n", equipo2_puntos);

    // Se imprime un mensaje dependiendo de que equipo gano o si el partido termino en empate. Si los puntos del equipo 1 son mayores a los puntos del equipo 2, se imprime que el equipo 1 es el ganador, si los puntos del equipo 2 son mayores a los puntos del equipo 1, se imprime que el equipo 2 es el ganador, si no, se imprime que el partido termino en empate
    if (equipo1_puntos > equipo2_puntos) {
        printf("El Equipo 1 es el ganador.\n");
    } else if (equipo2_puntos > equipo1_puntos) {
        printf("El Equipo 2 es el ganador.\n");
    } else {
        printf("El partido terminó en empate.\n");
    }

    printf("Cantidad de tiros simples: %d\n", simples);
    printf("Cantidad de tiros dobles: %d\n", dobles);
    printf("Cantidad de tiros triples: %d\n", triples);
    
    // Se calcula el promedio de tiros simples, dobles y triples. Para calcular el promedio, se suman los puntos de los dos equipos y se divide por la cantidad de tiros simples, dobles o triples
    float promedio_simples = (float)(equipo1_puntos + equipo2_puntos) / simples;
    float promedio_dobles = (float)(equipo1_puntos + equipo2_puntos) / dobles;
    float promedio_triples = (float)(equipo1_puntos + equipo2_puntos) / triples;

    printf("Promedio de tiros simples: %.2f\n", promedio_simples);
    printf("Promedio de tiros dobles: %.2f\n", promedio_dobles);
    printf("Promedio de tiros triples: %.2f\n", promedio_triples);

    // Se calcula el porcentaje de puntos por tiros simples, dobles y triples. Para calcular el porcentaje, se suman los puntos de los dos equipos y se divide por la cantidad de tiros simples, dobles o triples y se multiplica por 100
    float total_puntos = equipo1_puntos + equipo2_puntos;
    float porcentaje_simples = (float)(simples * 100) / total_puntos;
    float porcentaje_dobles = (float)(dobles * 100) / total_puntos;
    float porcentaje_triples = (float)(triples * 100) / total_puntos;

    printf("Porcentaje de puntos de tiros simples: %.2f%%\n", porcentaje_simples);
    printf("Porcentaje de puntos de tiros dobles: %.2f%%\n", porcentaje_dobles);
    printf("Porcentaje de puntos de tiros triples: %.2f%%\n", porcentaje_triples);

    return 0;
}
