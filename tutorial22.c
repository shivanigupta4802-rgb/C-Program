#include <stdio.h>
int main()
{
    float fahrenheit, celsius;
    printf("Enter temperature in celsius");
    scanf("%f", & celsius);
fahrenheit = (celsius * 9.0 * 5.0) + 32;
printf("Temperature in fahrenheit: %.2f\n", fahrenheit);
return 0; 
}