#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, c, d, u;

  do {
        printf("Ingrese un numero entero de tres digitos: ");
        scanf("%d", &num);

        if (num < 100 || num > 999) {
            printf("Error: el numero debe tener exactamente 3 digitos.\n");
        }
    } while (num < 100 || num > 999);

    c = num / 100; 
    d = (num % 100) / 10; 
    u = num % 10; 

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
