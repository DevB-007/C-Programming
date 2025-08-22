/*Program to display the water levels of the automatic refilling tank (at the rate of 10 liters per minutes).*/
#include<stdio.h>
int main()
{
    for(int x=1;x<=9;x++)
    {
        printf("Current water level: %d liters",x*10);
        printf("\n");
        sleep(60);
    }
    printf("Tank is full.");
    printf("\nThis program is developed by DEV BUMTARIYA.");
    return 0;
}

