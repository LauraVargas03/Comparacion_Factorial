#include <stdio.h>

long long int factorialRecursivo(int n) {
    
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial_recursivo(n - 1);
}

int main() {
    
    int num;
    
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        printf("Factorial de %d es: %lld\n", num, factorialRecursivo(num));
    }

    return 0;
}
