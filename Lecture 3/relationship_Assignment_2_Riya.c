/* Created by Riya Patel on 7/1/20. */


#include <stdio.h>

int main(){

    int a, b;
    /* asks the user to give 2 integers */
    scanf ("%d\n %d", &a, &b);

    /* first checks if a>b */
    if (a>b) {
        printf ("%d is greater than %d", a, b);

    /* will only run if the the if statement above is false */
    } else if (b>a) {
        printf ("%d is greater than %d", b, a);

    /* basically means that the numbers are the same */
    } else  {
        printf ("%d and %d are the same integer", a, b);
    }

}