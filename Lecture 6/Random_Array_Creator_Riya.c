/* Created by Riya Patel on 7/7/20. */

#include <stdio.h>
#include <stdlib.h>

/* Exercise 2 */
int main(){

    int n;
    int count = 0;
    printf("Enter a number 0 to 10:\n");
    scanf("%d", &n);
    int arr[15];

    /* generates an array of length 15 which has random numbers from 0 to 10 */
    for(int i = 0; i<15; i++){
        arr[i] = (rand()%11);
    }

    /* checks if the inputted number is in the array and puts an asterisk */
    /* or else will print it regularly */
    for (int i = 0; i<15; i++){
        if (arr[i] == n){
            count++;
            printf("* ");
        } else
            printf("%d ", arr[i]);
    }
    printf("\n%d appears %d times", n, count);
    return 0;
}
