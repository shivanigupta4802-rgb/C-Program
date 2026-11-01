#include<stdio.h>
void printFibonacci(int wavy) {
    int First = 0;
    int Second = 1; 
    int Next;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= wavy; i++){
        Next = First + Second;
        First = Second;
        Second = Next;
        printf("%d", First);
    }
    printf("\n");
}
int main() {
    int terms = 100;
    printFibonacci(terms);
    return 0;
}