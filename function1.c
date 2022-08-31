
//https://www.tutorialspoint.com/cprogramming/c_functions.htm
//gcc function1.c

#include <stdio.h>

int max(int, int);

int main() {
    int num1 = 100;
    int num2 = 200;
    printf("result: %i \n", max(num1, num2));
    printf("result: %i \n", max(num2, num1));
    return 0;
}


int max(int xxx, int yyy) {
    int result;
    if (xxx > yyy) {
        result = xxx;
    }
    else {
        result = yyy;
    }
    return result;
}