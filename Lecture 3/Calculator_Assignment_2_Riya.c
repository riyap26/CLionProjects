/* Created by Riya Patel on 7/1/20. */

#include <stdio.h>
#include "math.h"

int main(){

    printf ("Choose an operation '+,-,*,/,%%'\n");
    char x;
    /* asks for an operator as an input */
    scanf ("%c", &x);

    printf ("input 2 numbers\n");
    float a, b;
    /* asks for two operands as inputs */
    scanf ("%f\n %f", &a, &b);

    switch (x){
        /* checks if x is the + operator */
        case '+':
            printf("The sum is %f", sum (a, b));
            break;
        /* checks if x is the - operator */
        case '-':
            printf ("The difference %f", sub (a, b));
            break;
        /* checks if x is the * operator */
        case '*':
            printf ("The product is %f", mult (a, b));
            break;
        /* checks if x is the / operator */
        case '/':
            printf ("The quotient is %f", div (a, b));
            break;
        /* checks if x is the % operator */
        case '%':
            printf ("The modulo is %d", (int) mod (a,b));
            break;
        /* only runs if no cases match */
        default:
            printf ("You did not choose a proper operator");

    }
    return 0;
}

