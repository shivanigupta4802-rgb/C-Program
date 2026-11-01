#include<stdio.h>
void printfFibonacci(int n);
int first = 0;
int second = 1;
int next;
printf("Fibonacci Series: ");
for (int i = 1; i <= n; i++) {
    printf("%d", first);
    next = first + second;
    first = second;
    second = next;
}
printf("\n");
}
int main() {
    int term = 7;
    printfibonacci(terms);
    return 0;
}
