#include <stdio.h>

int main(int argc, char const *argv[])
{
     int numero, digitos = 0;
    
    printf("Introduce un numero entero: ");
    scanf("%d", &numero);
    
    while (numero != 0) 
    {
        numero /= 10;
        digitos++;
    }
    
    printf("El numero tiene %d digitos.\n", digitos);
    
    return 0;
}
