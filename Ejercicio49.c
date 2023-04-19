#include <stdio.h>

int main() {
    int count = 1;

    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 3; j++) {
            int k = ((i-1)*3)+j;
            printf("(%d,%d,%d)\n", k, i, j);
            count++;
        }
    }

    return 0;
}


