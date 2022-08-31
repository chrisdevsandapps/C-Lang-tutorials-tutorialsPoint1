
//https://www.tutorialspoint.com/cprogramming/c_function_call_by_reference.htm
//gcc function2.c
//pass by value

#include <stdio.h>

void swap(int *xxx, int *yyy);

int main() {

    int num1 = 100;
    int num2 = 200;
    printf("value of num1 before swap:\t%d \n", num1);
    printf("value of num2 before swap:\t%d \n", num2);

    swap(&num1, &num2);

    printf("value of num1 after swap:\t%d \n", num1);
    printf("value of num2 after swap:\t%d \n", num2);

    return 0;
}


void swap(int *xxx, int *yyy) {
    int temp;
    temp = *xxx;
    *xxx = *yyy;
    *yyy = temp;
    printf("\n");
    printf("value of num1 inside swap():\t%d \n", xxx);
    printf("value of num2 inside swap():\t%d \n", yyy);
    printf("\n");
    return;
}