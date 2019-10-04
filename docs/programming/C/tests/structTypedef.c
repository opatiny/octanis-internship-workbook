#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    typedef struct Point { // putting the word Point here also allows to create a Point instance using: struct Point
        int x;
        int y;
    } Points; // here, we define a data type with the name Points

    Points point1; // initiating an instance of Points

    point1.x = 2; // assigning a value to the instance property

    printf("point1.x: ");
    printf("%d\n", point1.x);

    printf("point1.y (not initialized): ");
    printf("%d\n", point1.y);

    // both done at the same time:
    Points point2 = {3, 4};

    printf("point2.x: ");
    printf("%d\n", point2.x);

    struct Point newPoint = {5, 6};

    printf("newPoint.x: ");
    printf("%d\n", newPoint.x);

    return 0;
}