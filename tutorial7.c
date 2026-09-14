#include<stdio.h>
/* 
print a multiplication table of a number entered by thr user in pretty form
Example:
input
enter the number you want the multiplication table of:
6
output
Table of 6
6 * 1 = 6
6 * 2 = 12
6 * 3 = 18
6 * 4 = 24
6 * 5 = 30
6 * 6 = 36
6 * 7 = 42
6 * 8 = 48
6 * 9 = 54
6 * 10 = 60

*/
int main()
{
    int num = 6;

    printf("The table of %d is:\n", num);
         
    scanf("%d", &num);

    printf("Table of %d\n", num);

    printf("%d * 1 = %d\n", num, num * 1);
    printf("%d * 2 = %d\n", num, num * 2);
    printf("%d * 3 = %d\n", num, num * 3);
    printf("%d * 4 = %d\n", num, num * 4);
    printf("%d * 5 = %d\n", num, num * 5);
    printf("%d * 6 = %d\n", num, num * 6);
    printf("%d * 7 = %d\n", num, num * 7);
    printf("%d * 8 = %d\n", num, num * 8);
    printf("%d * 9 = %d\n", num, num * 9);
    printf("%d * 10 = %d\n", num, num * 10);

    return 0;
}n