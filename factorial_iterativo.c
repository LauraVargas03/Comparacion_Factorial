#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long long factorial_iterativo(int n, int *memoria_usada) {
    unsigned long long resultado = 1;

    for (int i = 1; i <= n; i++) {
       
        unsigned long long *memoria = (unsigned long long *)malloc(sizeof(unsigned long long));
        (*memoria_usada)++;  
        
        resultado *= i;

        free(memoria); 
    }

    return resultado;
}

int main() {
    int num;
    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("El factorial no está definido para números negativos.\n");
        return 1;
    }

    int memoria_usada = 0;
    clock_t start, end;

    start = clock();
    unsigned long long resultado = factorial_iterativo(num, &memoria_usada);
    end = clock();

    double tiempo_ejecucion = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Factorial iterativo de %d es: %llu\n", num, resultado);
    printf("Tiempo de ejecución: %f segundos\n", tiempo_ejecucion);
    printf("Memoria usada (aprox. iteraciones): %d bytes\n", memoria_usada * (int)sizeof(unsigned long long));

    return 0;
}
