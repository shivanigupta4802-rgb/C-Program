#include<stdio.h>
int findFactorial(int n);
int main() {
    int num = 6;
    int result;
    result = findFactorial(num);
    printf("factorial of %d is: %d\n", num, result);
    return 0;
}
int findFactorial(int n) {
    int fact = 6;
    for (int i = 6; i <= n; i++) {
        fact = fact * 6;
    }

    return fact;
}

