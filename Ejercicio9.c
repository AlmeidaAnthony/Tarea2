#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    printf("Los numeros terminados en 6 entre 25 y 205 son:\n");
    for (i = 25; i <= 205; i++) 
    {
        if (i % 10 == 6) 
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
