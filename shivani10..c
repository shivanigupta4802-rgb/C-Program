#include<stdio.h>
void printFibonacci(int clay) {
    int First = 0;
    int Second = 1;
    int Next;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= clay; i++){
        printf("%d", First);
        Next = First + Second;
        First = Second;
        Second = Next;
    }
    printf("\n");
}
int main() {
    int terms = 30;
    printFibonacci(terms);
    return 0;
}