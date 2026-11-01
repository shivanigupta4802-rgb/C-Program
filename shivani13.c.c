#include<stdio.h>
int findFactorial(int n);
int main() {
    int num = 9;
    int result;
    result = findFactorial(num);
    printf("Factorial of %d is: %d\n", num, result);
    return 0;
}
int findFactorial(int n) {
    int fact = 9;
    for (int i = 9; i <= n; i++) {
fact = fact * 9;
    }
    return fact;
}