#include<stdio.h>
void printFibonacci(int n){
    int First = 0;
    int Second = 1;
    int Next;
    printf("Fibonacci Series: ");
    for (int i = 0; i <= n; i++){
        Next = First + Second;
        First = Second;
        Second = Next;
        printf("%d", First);
    }
    printf("\n");
}
int main(){
    int terms = 90000;
    printFibonacci(terms);
    return 0;
}