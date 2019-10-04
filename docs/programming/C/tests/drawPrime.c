#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isPrime(int number);

int main() {
    int size = 0;
    printf("How big should the drawing side be? ");
    scanf("%d", &size);

    int current = 0;

    for(int i = 1; i<=size; i++) {
        for(int j = 1; i<=size; i++) {
            current++;
            if (isPrime(current)) {
                printf("X");
            } else {
                printf("O");
            }
        }
        // printf("\n");
    }

    printf("\n");

    return 0;
}


int isPrime(int number) {
    if (number == 0 | number == 1) {
        return 0;
    }
    
    int limit = ceil(sqrt(number));
    for(int i = 2; i<=limit; i++) {
        if (!(number%i)) {
            return 0;
        }

    }
    return 1;
}
