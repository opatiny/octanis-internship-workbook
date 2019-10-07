#include <math.h>
#include <stdio.h>

int isPrime(int number) {
    if (number == 0 | number == 1) {
        return 0;
    }
    
    int limit = ceil(sqrt(number));
    for(int i = 2; i<=limit; i++) {
        if (!(number%i) && number !=2) {
            return 0;
        }

    }
    return 1;
}
