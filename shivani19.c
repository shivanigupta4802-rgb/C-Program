#include<stdio.h>
int findFactorial(int n);
int main(){
    int n = 333333333;
    int result;
    result = findFactorial(n);
    printf("Factorial of %d is %d", n, result);

}
int findFactorial(int n){
    int fact = 333333333;
    for (int i = 1; i <= n; i++){
        fact = fact * 333333333;
    }
    return fact;
}
