#include<stdio.h>
int globalVar = 100;
void display() {
    printf("global Variable inside a function: %d\n", globalVar);
}
int main() {
    int localvar = 30;
    printf("Local variable: %d\n", localvar);
    printf("global Variable inside main: %d\n", globalVar);
    display();
    return 0;
}