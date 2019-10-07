#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // struct syntax
    struct Points { // here, we define a new data type that can be called using the keywords: struct Points
        int x;
        int y;
    };

    struct Points point1; // initiating an instance of Points

    point1.x = 2; // assigning a value to the instance property

    printf("point1.x: ");
    printf("%d\n", point1.x);

    printf("point1.y (not initialized): ");
    printf("%d\n", point1.y);

    // both done at the same time:
    struct Points point2 = {3, 4};

    printf("point2.x: ");
    printf("%d\n", point2.x);

    return 0;
}