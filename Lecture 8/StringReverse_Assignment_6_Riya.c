/* Created by Riya Patel on 7/9/20. */

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Insert a string:\n");
    scanf("%s", &str);
    /* designates start and end pointers */
    char *start = str;
    char *end = start + strlen(str) -1;
    printf("The reverse of the string is: \n");

    /* while loop decrements the end pointer until it reaches the start value */
    while (*start != *end){
        printf("%c", *end);
        end--;
    }
    /* prints first letter */
    printf("%c", *start);
}

