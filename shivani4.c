#include<stdio.h>
int sub(int w, int z);
int main() {
    int w = 23, z = 22, result;
    result = sub(w, z);
    printf("sub is: %d\n", result);
    return 0;
}
int sub(int w, int z) {
    return w - z;
}