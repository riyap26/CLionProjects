#include <stdio.h>
#include <string.h>


//  void func (char c[6]){
//    printf("%d", sizeof(c[6]));
//}
//
//
//int main() {
//    char a[6];
//    func (a);
//
//    return 0;
//}


int main(){
    int arr[4] = {1, 5, 3, 9};
    int *arrPtr = arr;
    printf("%d\n", *arrPtr);
    int *secPtr = arr +2;
    printf("%d\n", (*secPtr));

    arrPtr++;
    *arrPtr = 6;
    (*arrPtr)++;
    printf("%d\n", *arrPtr);
}

//int main (){
//    int arr[5] = {3, 1, 0, 2, 9};
//    int *arrPtr;
//    arrPtr = arr;
//    printf("%d\n", arrPtr[3]);
//    printf("%d\n", *(arrPtr+3));
//}


//int main(){
//    char word[6] = "HELLO";
//    char *wPtrStart = word;
//    char *wPtrEnd = wPtrStart + strlen(word) -1;
//    int i;
////i does not make a difference
//    for (i=0; *wPtrStart != *wPtrEnd; i++){
//        printf("%c\n", *wPtrEnd);
//        wPtrEnd--;
//    }
//}


//int main(){
//
//    int x=7, y=3;
//    const int *ptr = &x;
//    *ptr = 11;
//    x = 8;
//    ptr = &y;
//    *ptr = 9;
//
//}


//int main(){
//
//
//    char *arr[3] = {"Hello", "world", "wonderful"};
//    printf("%s", arr[2]);
//
//    char arr2[3][15] = {"Hello", "world", "wonderful"};
//    printf("%s", arr2[0]);
//
//}

//int main(int argc, char *argv[]) {
//    printf("\n");
//    int i;
//    for(i=1; i<argc; i++) {
//        printf("%s%s", argv[i], (i<argc-1) ? " " : "");
//    }
//    printf("\n");
//    return 0;
//}