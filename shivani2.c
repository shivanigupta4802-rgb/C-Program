#include<stdio.h>
void morning();
void afternoon();
void evening();
int main() {
     morning();
     return 0;
}
void morning() {
    printf("Good morning!\n");
    afternoon();
}
void afternoon() {
    printf("Good afternoon\n");
    evening();
}
void evening() {
    printf("Good Evening :");
}