#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, a = 0, b = 1, c = 0, esFibonacci = 0;
    printf("Ingrese un numero de 2 digitos: ");
    scanf("%d", &num);
    if (num == 0 || num == 1) {
        esFibonacci = 1;
    } else {
        while (c < num) {
            c = a + b;
            a = b;
            b = c;
            if (c == num) {
                esFibonacci = 1;
                break;
            }
        }
    }
    if (esFibonacci) {
        printf("%d pertenece a la serie de Fibonacci.\n", num);
    } else {
        printf("%d no pertenece a la serie de Fibonacci.\n", num);
    }

    return 0;
}
