#include <stdio.h>

int contarDigitos(int numero);

int contarDigitos(int numero)
{
    int digitos = 0;

    while (numero != 0)
    {
        numero /= 10;
        digitos++;
    }

    return digitos;
}


int main(int argc, char const *argv[])
{
    int numero, digitos = 0;

    printf("Introduce un numero entero: ");
    scanf("%d", &numero);

    digitos = contarDigitos(numero);

    printf("El numero tiene %d digitos.\n", digitos);

    return 0;
}
