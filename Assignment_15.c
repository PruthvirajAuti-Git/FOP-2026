#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int random = rand();
    printf("Random number is: %d\n", random);
    return 0;
}