/* Created by Riya Patel on 7/7/20. */

#include <stdio.h>

/* Exercise 1 */
int main() {

    int length;
    printf("Input the size of array:\n");
    scanf ("%d", &length);
    int n[length];

    printf("Input the elements:\n");
    for (int i = 0; i<length; i++){
        scanf("%d", &n[i]);
    }

    for (int i = 0; i<length; i++){
        printf ("%d ", n[i]);
    }
    return 0;
}
