/* Created by Riya Patel on 7/9/20. */

#include <stdio.h>

/* challenge problem */

int main(){
    printf("Insert a string:\n");

    while(1){
        char i = getchar();
        /* prints newline if the character is a space */
        if (i == ' '){
            printf("\n");
        }
        /* infinite while loop will only break if user inputs '.' at the end of sentence */
        else if (i == '.'){
            break;
        }
        /* otherwise will print the character */
        else{
            printf("%c", i);
        }
    }
}