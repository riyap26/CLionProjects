/* Created by Riya Patel on 7/9/20. */

#include <stdio.h>
#include <string.h>

/* my functions */
void myStrcat(char *str1, char *str2);
int myStrcmp(char *str1, char *str2);




int main(){
    char str1[100], str2[100];
    printf("Input string 1: \n");
    scanf("%s", str1);
    printf("Input string 2: \n");
    scanf("%s", str2);

    /* the strcmp() function */
    printf("\nThe comparison in lexicographical order is:\n");
    printf("%d", myStrcmp(str1, str2));

    /* the strcat() function */
    printf("\nThe concatenation of the two strings is: \n");
    myStrcat(str1, str2);
    printf("%s", str1);
    return 0;
}

int myStrcmp(char *str1, char *str2){
    /* first checks if the first letters are different, if they are, it subtracts them */
    if (*str1 != *str2){
        return *str1 - *str2;
    }
    else{
        /* while loop increments the pointers until their values are not the same, or if they both end in \0*/
        while (*str1 == *str2 && (*str1 != '\0' && *str2 != '\0')){
            str1++;
            str2++;
        }
        if (*str1 != *str2){
            return *str1 - *str2;
        }
        /* both strings are the same */
        if (*str1 == '\0' && *str2 == '\0'){
            return 0;
        }
    }
}


void myStrcat (char *str1, char *str2){
    /* designates start and end pointers */
    char *startPtr = str1;
    char *endPtr = startPtr + strlen(str1) + strlen(str2);

    /* puts string 2 into the rest of string 1 */
    for(int i = strlen(str1); *str2 != '\0'; i++){
        str1[i] = *str2;
        str2++;
    }
    *endPtr = '\0';
}