#include <stdio.h>
int main()
{
    int vehicle_id, no_of_journeys;

    printf("Enter the vehicle id :  ");
    scanf("%d", &vehicle_id);

    printf("Enter the no of journeys :");
    scanf("%d", &no_of_journeys);

    int total = 4 * no_of_journeys;
    printf("4 liter require for particular journey\n");
    printf("Total journeys %d\n ", no_of_journeys);
    printf("Vehicle id %d\n", vehicle_id);
    printf("Total fuel %d\n", total);

    return 0;
    
    

}