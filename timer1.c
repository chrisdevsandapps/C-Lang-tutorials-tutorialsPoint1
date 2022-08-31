
// https://www.youtube.com/watch?v=Kddn0MUbn4k
// https://www.youtube.com/watch?v=Qoed2uBwF_o


#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <math.h>

void mySlowFunction(int);

int main() {

    time_t now0 = time(NULL);
    printf("%ld\n", now0);
    sleep(1);
    time_t now1 = time(NULL);
    printf("%ld\n", now1);
    sleep(1);
    time_t now2 = time(NULL);
    printf("%ld\n", now2);
    sleep(1);

    double diff = difftime(now2, now0);
    printf("time difference: %f\n", diff);

    printf("start\n");
    volatile unsigned long long i;
    for (i = 0; i < 1000000000ULL; ++i);
    printf("stop\n");

    mySlowFunction(15);

    return 0;
}


void mySlowFunction(int baseNumber) {
    // https://gist.github.com/sqren/5083d73f184acae0c5b7
    printf("\nstart mySlowFunction():\n");
    time_t now1 = time(NULL);
    double result = 0;
    for (double i = pow(baseNumber, 7); i >= 0; i--) {
        result += atan(i) * tan(i);
    }
    time_t now2 = time(NULL);
    printf("end mySlowFunction()\n");
    double diff = difftime(now2, now1);
    printf("time difference: %f\n", diff);
}