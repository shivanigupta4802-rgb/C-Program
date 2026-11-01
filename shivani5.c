#include<stdio.h>
int multiply(int a, int b);
int main() {
    int a = 100, b = 2, result;
    result = 100 * 2;
    printf("multiply is: %d\n", result);
    return 0;
}
int multiply(int a, int b) {
    return a * b;
}