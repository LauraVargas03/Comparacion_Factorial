# Informe Comparativo: Factorial Iterativo vs Recursivo

## Introducción

En este informe se comparan dos implementaciones del cálculo del factorial: una versión iterativa y otra recursiva, ambas en lenguaje **C**.

## Resultados preliminares 

| Valor de n | Tiempo Iterativo (ms) | Tiempo Recursivo (ms) | Consumo Memoria (Recursivo) |
|---|---|---|---|
| 1 | 0.001 | 0.003 | Bajo |
| 55 | 0.001 | 0.003 | Bajo |
| 100 | 0.002 | 0.004 | Moderado |
| 20 | 0.001 | 0.003 | Bajo |

## Conclusiones
- Si se busca eficiencia en cuanto al uso de memoria y el tiempo ejecución, la mejor opción es el método iterativo.
- Si se requiere simplicidad en el código, la recursión es una buena opción, aun que tiene restricciones para valores grandes de n.
- La función iterativa usa una sola variable (O(1)) y ejecuta el cálculo más rápida y eficientemente.
- En la función recursiva para valores de n mayores, el uso de memoria seguirá aumentando lo que podría llevar a problemas de desbordamiento de pila.
