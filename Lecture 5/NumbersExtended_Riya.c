/* Created by Riya Patel on 7/6/20. */

#include <stdio.h>


/* my prime or composite number function */
/* in the main function,declare md as 1 less than n */
int primeOrNot (int n, int md){
    /* if it is a prime number, it will return 1 */
    if (md==1)
        return 1;
    /* if it is a composite number, it will return 0 */
    if (n%md == 0)
        return 0;
    return primeOrNot(n, md-1);
}



/* calculating the sum of all the digits function */
int numSum (int x) {
    /* base case */
    if (x == 0)
        return 0;
    else
        /* will return the last digit and call the function again to add the other digits until n gets to 0 */
        return x%10 + numSum(x/10);
}

