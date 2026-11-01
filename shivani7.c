#include<stdio.h>
int x = 300;
void cry() {
    printf("inside a cry function: %d\n", x);
}
int main() {
    int y = 20;
    printf("local variable: %d\n", y);
    printf("global variable inside main: %d\n", x);
    cry();
    return 0;
}