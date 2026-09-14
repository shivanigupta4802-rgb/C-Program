#include<stdio.h>
int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    switch (age)
    {

    case 1:
    printf("The age is 6\n");
    printf("Enter your marks: ");
    scanf("%d", &marks);

    switch (marks)
    {
        case 1:
        printf("The marks is 90\n");
        break;

        case 2:
        printf("The marks is 80\n");
        break;

        default:
        printf("Your marks are not valid\n");
    }
    break;

    case 2:
    printf("The age is 7\n");
    break;

    case 3:
    printf("The age is 8\n");
    break;

    default:
    printf("The age is not matched\n");
    break;
}

    
    return 0;
}
    

