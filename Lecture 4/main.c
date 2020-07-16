#include <stdio.h>

//int main() {
//
//    int x = 0;
//    while (x<10){
//
//         x++;
//         if (x%2)
//            continue;
//         printf ("x = %d\n", x);
//
//    }
//
//}

//int main(){
//    int x;
//    do {
//        printf ("\nEnter a number: ");
//        if (scanf("%d", &x) ==0) {
//            printf ("Not a number\n");
//            while (getchar() != '\n');
//        }
//    } while (x != 0);
//}

//int main(){
//    int counter, total;
//    for (counter=0, total=0; (total<=100 ); counter++){
//            if (total == 100){
//                printf("counter = %d and total = %d\n", counter, total);
//                break;
//            }
//            total += 10;
//            printf("counter = %d and total = %d\n", counter, total);
//
//    }
//}
// counter as to be 10 and total 100
// or you can make condition total <100
// and if (count == !0) then total plus ten



//Exercises

//int main(){
//
//    int i, n, sum = 0;
//    scanf("%d", &n);
//    for (i = 1; i<=n; i++){
//        sum += i;
//    }
//    printf("sum = %d", sum);
//}
// sum of natural number


//int main (){
//
//    float n;
//    float sum = 0;
//    float counter = 0;
//
//    while (1){
//        printf("input a number:\n");
//        scanf("%f",&n);
//        if (n == 0){
//            break;
//        }
//        sum += n;
//        counter++;
//    }
//    printf ("the average is: %f", sum/counter);
//
//}

//OR OTHER WAY
//int main(){
//    float sum =0;
//    int num_inputs = -1;
//
//    for (float input = 1; input != 0; num_inputs++){
//        printf ("input a num\n");
//        scanf ("%f", &input);
//        sum += input;
//
//    }
//    printf("the av is %f", sum/num_inputs);
//}
