/* Created by Riya Patel on 7/3/20. */

#include <stdio.h>

int main() {
    char c;
    int counter = 0;
    printf("Input a string of letters and input 0 when done:\n");

 /* infinite while loop so it counts if each character in a string is a C/c until the user inputs 0 */
    while (1){
        c = getchar();
        if (c == '0') {
            break;
        }
        if ((c == 'c') || (c == 'C')) {
            counter++;
        }
    }
    printf("C/c appears %d times", counter);
}
