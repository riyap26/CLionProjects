/* Created by Riya Patel on 7/3/20. */

#include <stdio.h>


/* UPDATED AND FIXED VERSION */

int main() {

    int n1, n2, i;
    printf ("input a number: \n");
    scanf ("%d",&n1);
    printf("input a second number\n");
    scanf("%d", &n2);

    /* first finds the biggest number inputted */
    if (n1>n2){
        i=n1;
    }
    else{
        i=n2;
    }

    /* i is 1 less than the max number & as i decreases, if the modulo of both is 0, that is the gcd */
    for (i-1; i>0; i--){
        if ((n1%i == 0) && (n2%i==0)){
            printf ("the GCD is %d", i);
            break;
        }
    }
    return 0;
}