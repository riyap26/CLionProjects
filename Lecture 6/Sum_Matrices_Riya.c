/* Created by Riya Patel on 7/7/20. */

#include <stdio.h>

/* Exercise 4*/



void sumCalc (int m, int n, int first[m][n], int second[m][n]){
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            /* gets the sum of the two */
            printf("%d ", first[i][j] + second[i][j] );
        }
        printf("\n");
    }
}



int main(){
    int m, n, i, j;
    printf ("Input the values of m and n:\n");
    scanf ("%d", &m);
    scanf ("%d", &n);
    int f[m][n], s[m][n];

    printf("Input elements of first matrix:\n");
    for (i=0; i<m; i++) {
        for ( j=0; j<n; j++) {
            /* inputs the first matrix */
            scanf("%d", & f[i][j]);
        }
    }

    printf("Input elements of second matrix:\n");
    for (i=0; i<m; i++){
        for ( j=0; j<n; j++){
            /* inputs the second matrix */
            scanf("%d", & s[i][j]);
        }
    }

    printf("Sum of the two matrices:\n");
    sumCalc(m, n, f, s);


    return 0;
}
