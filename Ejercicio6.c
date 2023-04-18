#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, c, d, u;

    printf("Ingrese un numero entero de tres digitos: ");
    scanf("%d", &num);

    c = num / 100; // obtenemos el dígito de las centenas
    d = (num % 100) / 10; // obtenemos el dígito de las decenas
    u = num % 10; // obtenemos el dígito de las unidades

    printf("Los enteros entre 1 y %d son:\n", c);
    for (int i = 1; i <= c; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Los enteros entre 1 y %d son:\n", d);
    for (int i = 1; i <= d; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Los enteros entre 1 y %d son:\n", u);
    for (int i = 1; i <= u; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
