#include<stdio.h>
#define ticket 900
int main()
{
    printf("Welcome to Amusement park.");
    float total;
    int num_p,age;
    printf("\nEnter your age: ");
    scanf("%d",&age);
    if (age<=12)
    {
        printf("You are eligible for free entry.");
    }
    else
    {
        printf("You have to pay the ticket price of %d Rupees per person.",ticket);
        printf("\nHow many adults are there: ");
        scanf("%d",&num_p);
        total=ticket*num_p;
        printf("The total ticket fare is: %.2f",total);
    }
    printf("\nThis program is developed by DEV BUMTARIYA.");
    return 0;
}
