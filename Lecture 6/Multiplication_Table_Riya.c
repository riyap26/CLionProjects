/* Created by Riya Patel on 7/7/20. */

#include <stdio.h>

/* Exercise 3 */
int main(){

    /* declaring array */
    int arr[12][12];

    /* will create 12 by 12 table */
    for(int i=1; i<= 12; i++){
        for (int j=1; j<= 12; j++){
            arr[i][j] = i*j;
            printf("%d ", arr [i][j]);
        }
        printf("\n");
    }
    return 0;
}



////This is the same thing but a multiplication table from what the user inputs
//int main(){
//
//    int n;
//    printf("Enter number:\n");
//    scanf("%d", &n);
//    int arr[n][n];
//
//    printf("Multiplication table from 1 to %d:\n", n);
//    for(int i=0; i< n; i++){
//        for (int j=0; j< n; j++){
//            arr[i][j] = (i+1) * (j+1);
//            printf("%d ", arr [i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
