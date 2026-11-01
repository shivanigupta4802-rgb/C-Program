#include <stdio.h>

void check(int n)
{
    if (n > 0)
{
    printf("Positive number");
} else {
    printf("Negative or zero");
}
}
int main()
{
    check(-5);
    return 0;
}