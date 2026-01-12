/* objective: implement a recursive function to compute factorial of a number */
#include <stdio.h>

int factorial(int f) {
    if ( f == 0 || f == 1 ) {
        return 1;
    } else {
        return f * factorial(f - 1);
    }
}

int main() {
    /* testing code */
    printf("0! = %i\n", factorial(0));
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
}

/* define your function here (don't forget to declare it) */