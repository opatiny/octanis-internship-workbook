#include <stdio.h>
#include <string.h>

typedef struct Book{
    char author[50];
    char title[50];
    int date;
} Book;

int main() {

    Book contrevent = {"Damasio", "LaHorde", 2012};

    printf("%s\n", contrevent.title);

    strcpy(contrevent.title, "Faint"); 

    printf("%s\n", contrevent.title);

    contrevent.date = 2048;

    printf("%d\n", contrevent.date);

    return 0;
}