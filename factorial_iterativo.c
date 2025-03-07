#include <stdio.h>
#include <time.h>

unsigned long long factorial_iterativo(int n) {
    
    unsigned long long resultado = 1;
    
    for (int i = 1; i <= n; i++) {
        resultado *= i;
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

    clock_t start, end;
    start = clock();  // Iniciar medición de tiempo
    unsigned long long resultado = factorial_iterativo(num);
    end = clock();  // Finalizar medición de tiempo

    double tiempo_ejecucion = ((double)(end - start)) / CLOCKS_PER_SEC;
    
    printf("Factorial iterativo de %d es: %llu\n", num, resultado);
    printf("Tiempo de ejecución: %f segundos\n", tiempo_ejecucion);

    return 0;
}
