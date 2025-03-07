#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long long factorial_recursivo(int n, int *memoria_usada) {
    
    unsigned long long *memoria = (unsigned long long *)malloc(sizeof(unsigned long long));
    (*memoria_usada)++;  

    if (n == 0 || n == 1) {
        free(memoria);
        return 1;
    }

    unsigned long long resultado = n * factorial_recursivo(n - 1, memoria_usada);
    free(memoria);  

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
    unsigned long long resultado = factorial_recursivo(num, &memoria_usada);
    end = clock();

    double tiempo_ejecucion = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Factorial recursivo de %d es: %llu\n", num, resultado);
    printf("Tiempo de ejecución: %f segundos\n", tiempo_ejecucion);
    printf("Memoria usada (aprox. llamadas recursivas): %d bytes\n", memoria_usada * (int)sizeof(unsigned long long));

    return 0;
}
