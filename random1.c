

// https://www.javatpoint.com/random-function-in-c
// https://www.poftut.com/what-is-sleep-function-and-how-to-use-it-in-c-program/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
const int sleepTime = 500000;
void randomFunction1();
void randomFunction2();

int main() {
    printf("\nrandom numbers test\n\n");
    usleep(2000000);
    randomFunction1();
    usleep(2000000);
    randomFunction2();
    return 0;
}

void randomFunction1() {
    printf("randomFunction1():\n");
    for (int i = 0; i < 10; i++) {
        usleep(sleepTime);
        printf("%i %d\n", i, rand());
    }
    printf(" \n");
}
void randomFunction2() {
    printf("randomFunction2():\n");
    for (int i = 0; i < 10; i++) {
        printf("%i %d\n", i, rand());
        usleep(sleepTime);
    }
    printf("\n");
}


