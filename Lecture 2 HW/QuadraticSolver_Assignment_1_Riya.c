/* Created by Riya Patel on 6/30/20 */

#include <stdio.h>
#include <math.h>

/* updated work */
int main(){

    int a, b, c, d;

    printf ("Insert a, b, and c\n");
    /* asking user for a,b,c of a quadratic equation */
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);

    /* variable for the discriminant */
    d = ( (b*b) - (4*a*c) );

    /* if the discriminant is greater than zero, will have real roots*/
    if (d>0){
        float rt1 =  ( (-b + sqrt(d)) / (2*a));
        float rt2 =  ( (-b - sqrt(d)) / (2*a));

        printf ("The roots are %0.3f and %0.3f \n", rt1, rt2);
    }

    /* if the discriminant is equal to zero, will only have one root */
    else if (d == 0) {
        float root = -b / (2 * a);
        printf("The root is %.2f;", root);
    }

    /* if the discriminant is less than zero, will have imaginary, complex roots */
    else {
        /* separated the formula into two float variables */
        float img1 = (double) -b / (2 * a);
        float img2 = sqrt(-d) / (2 * a);
        printf("The roots are %.3f+%.3fi %.3f-%.3fi", img1, img2, img1, img2);
    }

    return 0;

}


