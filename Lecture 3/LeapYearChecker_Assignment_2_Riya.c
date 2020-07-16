/* Created by Riya Patel on 7/1/20. */

#include <stdio.h>

int main(){

    int x;
    printf ("Please input a year: \n");
    /* asks for an year as an input */
    scanf("%d", &x);

    /* if the year is divisible by 4, 100 and 400, it is a leap year, but if not, it is not a leap year */
    ((x%400 == 0) && (x%100 == 0) && (x%4==0)) ? printf ("It is a leap year\n") : printf ("It is not a leap year\n");
    /* if the year is divisible by 4 but not by 100, it is a leap year, but if not, it is not a leap year */
    ((x%4 == 0) && (x%100 != 0))? printf ("It is a leap year\n") : printf ("It is not a leap year\n");
    /* if the year is not divisible by 4, it is not a leap year */
    (x%4 != 0)? printf ("It is not a leap year\n"): printf("It is a leap year\n");
}

