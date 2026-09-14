#include <stdio.h>
int main()
{
    int sub1, sub2, sub3;
    float total, average, percentage;

    printf("Enter your marks for three subject: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    total = sub1 + sub2 + sub3;
    average = total / 30.0;
    percentage = (total / 300.0) * 100;

    printf("Total marks: %.2f\n", total);
    printf("average marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    
    return 0;
    
    


}