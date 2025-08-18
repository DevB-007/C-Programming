/*Program for a countdown.*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of second to start countdown: ");
    scanf("%d",&n);
    if (n>=0)
    {
        for(i=n; i>0; i--)
        {
            printf("%d Seconds left",i);
            printf("\n");
            sleep(1);
        }
        printf("Countdown Completed.");
    }
    else
        printf("Please enter a valid input.");
printf("\nThis program is developed by DEV BUMTARIYA.");
}
