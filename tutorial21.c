#include <stdio.h>
int main()
{
    int p , n;
    float r , si;
    printf("Enter the value of p");
    scanf("%d", &p);

    printf("Enter the value r");
    scanf("%f", &r);

    printf("Enter the value of n");
    scanf("%d", &n);

    si=p*n*r/100;
    printf("%f",si);
    return 0;
}