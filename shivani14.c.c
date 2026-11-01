#include<stdio.h>
int findFactorial(int n);
int main() {
    int num = 80;
    int result;
    result = findFactorial(num);
    printf("Factorial of %d is: %d\n", num, result);
    return 0;
}
int findFactorial(int n)  {
    int fact  = 80;
    for (int i = 80; i <= n; i++){
    fact = fact * 1000;
}
return fact;
}
