/* Created by Riya Patel on 7/6/20. */

#include <stdio.h>
#include <math.h>

/* function declaration */
int sumSeries (int x);

int main(){
    int n;
    printf ("Input an integer: \n");
    scanf ("%d", &n);
    /* calling the function */
    printf ("The sum of the series is %d", sumSeries (n));

    return 0;
}

/* definition of function */
int sumSeries(int x){
    /* base case */
    if (x==1){
        return 1;
    }
    else {
        /* will do recursion */
        return pow(x, x) + sumSeries(x-1);
    }
}
