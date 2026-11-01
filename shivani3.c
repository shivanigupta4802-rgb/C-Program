#include<stdio.h>
int add(int a, int b);
int main() {
    int x = 5, y = 10, result;
    result = add(x, y);
    printf("sum is: %d\n",result);
    return 0;
}
int add(int a, int b) {
    return a + b;
}