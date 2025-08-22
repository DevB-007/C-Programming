/*Program to stimulate a bank withdrawing system.*/
#include<stdio.h>
int main()
{
    int bal=5000,with,n;
    do
    {
        printf("Enter the amount you want to withdraw: ");
        scanf("%d",&with);
        if (with>bal)
        printf("Insufficient Balance.");
        else
        {
            if (with>=0)
            {
            bal=bal-with;
            printf("Withdrawn amount: %d.",with);
            printf("\nRemaining balance is %d.",bal);
            }
            else
                printf("Please enter a valid amount to withdraw.");
        }
        printf("\nEnter 1 to continue withdrawing or enter 0 to exit: ");
        scanf("%d",&n);
     }while (n==1);
    printf("Transaction completed.");
return 0;
}
