#include <stdio.h>

int main() {
    int num1, num2, num3, temp;

    printf("Ingrese tres numeros mayores que 3 y menores que 15:\n");

    // Solicitar el primer número
    printf("Numero 1: ");
    scanf("%d", &num1);

    // Verificar si el primer número está dentro del rango válido
    if (num1 < 4 || num1 > 14) {
        printf("Error: El numero %d esta fuera del rango valido.\n", num1);
        return 1;
    }

    // Solicitar el segundo número
    printf("Numero 2: ");
    scanf("%d", &num2);

    // Verificar si el segundo número está dentro del rango válido
    if (num2 < 4 || num2 > 14) {
        printf("Error: El numero %d esta fuera del rango valido.\n", num2);
        return 1;
    }

    // Solicitar el tercer número
    printf("Numero 3: ");
    scanf("%d", &num3);

    // Verificar si el tercer número está dentro del rango válido
    if (num3 < 4 || num3 > 14) {
        printf("Error: El numero %d esta fuera del rango valido.\n", num3);
        return 1;
    }

    // Ordenar los números de mayor a menor
    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", num1, num2, num3);
        } else {
            printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", num1, num3, num2);
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num1 >= num3) {
            printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", num2, num1, num3);
        } else {
            printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", num2, num3, num1);
        }
    } else {
        if (num1 >= num2) {
            printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", num3, num1, num2);
        } else {
            printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", num3, num2, num1);
        }
    }

    return 0;
}