#include<stdio.h>
void printFibonacci(int lie){
    int First = 0;
    int Second = 1;
    int Next;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= lie; i++){
        Next = First + Second;
        First = Second;
        Second = Next;
        printf("%d", First);
    }
    printf("\n");
}
int main() {
    int terms = 30000;
    printFibonacci(terms);
    return 0;
}
