#include <stdio.h>

long long int factorialIterativo(int n) {
    
    unsigned long long resultado = 1;
    
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        printf("Factorial de %d es: %llu\n", num, factorialIterativo(num));
    }

    return 0;
}
