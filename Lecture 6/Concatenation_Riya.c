/* Created by Riya Patel on 7/7/20. */

#include <stdio.h>

/* Exercise 5 */
int main(){

    char s1 [100];
    char s2 [100];
    printf ("Enter string 1: \n");
    scanf ("%s", s1);
    printf ("Enter string 2: \n");
    scanf ("%s", s2);
    char s3 [200];
    int j = 0;

    /* this puts string 1 into string 3 */
    for (int i=0; s1[i] != '\0'; i++, j++){
        s3[i] = s1[i];
    }

    /* this puts string 2 into string 3 from the place where string 1 left off*/
    for (int i=0; s2[i] != '\0'; i++, j++){
        s3[j] = s2[i];
    }

    /* making sure to end the string */
    s3[j]= '\0';

    printf ("The concatenation of the two strings is %s", s3);

    return 0;

}
