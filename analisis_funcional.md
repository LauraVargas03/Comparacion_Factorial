# Análisis: Mejoras mediante el Paradigma Funcional

## Introducción

El cálculo del factorial puede beneficiarse de un enfoque basado en programación funcional. Este análisis describe cómo se puede mejorar la eficiencia usando técnicas funcionales

## Características relevantes

- **Funciones puras**: Eliminan efectos secundarios, haciendo el código más modular y fácil de paralelizar.
- **Recursión de cola**: Reduce el uso de memoria al evitar crear múltiples marcos en la pila de llamadas.
- **Reducción (fold)**: Permite expresar el cálculo como una acumulación optimizable por el compilador.
- **Evaluación perezosa**: Solo calcula lo necesario.
- **Inmutabilidad**: Facilita memoización y paralelismo.
- 
## Ejemplo en Haskell

```haskell
factorial :: Integer -> Integer
factorial n = product [1..n]
```

