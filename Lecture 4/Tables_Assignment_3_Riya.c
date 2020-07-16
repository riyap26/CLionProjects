 /* Created by Riya Patel on 7/3/20. */

#include <stdio.h>

 int main(){
     int col, row, n;
     printf ("Input the number up to: ");
     scanf ("%d", &n);
     printf ("Multiplication table from 1 to %d\n", n);

/* nested for loop in order to make a table */
     for (row=1; row<=10; row++)  {
         for (col=1; col<=n; col++)
             printf("%5d x %d = %d", col, row, row*col);
         printf("\n");
     }
     return 0;
 }

