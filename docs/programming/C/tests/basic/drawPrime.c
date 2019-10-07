#include "isPrime.h" // local include

int main() {
    int size = 0;
    printf("How big should the drawing side be? ");
    scanf("%d", &size);

    int current = 0;

    for(int i = 1; i<=size; i++) {
        for(int j = 1; j<=size; j++) {
            current++;
            if (isPrime(current)) {
                printf("■  ");
            } else {
                printf("·  ");
            }
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
