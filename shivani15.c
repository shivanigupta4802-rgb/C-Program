#include<stdio.h>
int findFactorial(int n);
int main(){
    int num = 2026;
    int result;
    result = findFactorial(num);
    printf("Factorial of %d is: %d\n", num, result);
    return 0;
}
int findFactorial(int n) {
    int fact = 2026;
    for (int i = 2026; i <= n; i++){
        fact = fact * 2026;
    }
    return fact;

}