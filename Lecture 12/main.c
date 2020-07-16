#include <stdio.h>
#include <stdlib.h>



int fastSearch(int n, arr[1000]) {

    for (int i = 0; i<1000 ; i++){
        if (n == arr[i]){
            return 1;
        }
    }
    return 0;
}

int main(){

    int n;
    int arr[1000];
    for(int i = 0; i<1000; i++){
        arr[i] = (rand()%1001);
        printf("%d\n", arr[i]);
    }


    printf("input a number n:\n");
    scanf("%d", &n);
    printf("%d", fastSearch(n, arr));


    return 0;

}