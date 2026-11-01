#include<stdio.h>
void printFibonacci(int wow) {
    int First = 0;
    int Second = 1;
    int Next;
    printf("Fibonacci series: ");
    for (int i = 1; i <= wow; i++){
        Next = First + Second;
        First = Second;
        Second = Next;
        printf("%d", First);

    }
    printf("\n");
}
int main() {
    int terms = 2500;
    printFibonacci(terms);
    return 0; 
}