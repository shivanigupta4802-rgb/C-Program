#include <stdio.h>

// 1. Function Declaration
void printFibonacci(int n);

int main() {
    int term = 7; 
    
    
    printFibonacci(term); 
    
    return 0;
}

void printFibonacci(int n) {
    int first = 0;
    int second = 1;
    int next;

    printf("Fibonacci Series: ");

    
    for (int i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}