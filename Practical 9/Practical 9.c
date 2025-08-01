#include<stdio.h>
int main()
{
    int n;
    float total = 0, price = 0,disam,total_amount,dis;
    printf("Enter the number of items you want to purchase: ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {

        printf("Enter the price of the item %d: ",i);
        scanf("%f",&price);
        total = total + price;
        price = 0;
    }
    printf("Total Amount = %.2f",total);
    if (total>=1000 && total<5000)
    {
        dis=0.1;
        disam=dis*total;
        total_amount=total-disam;
        printf("\nDiscount applied: 10%%");
        printf("\nThe total amount payable is: %.2f",total_amount);
    }
    else if (total>=5000)
    {
        dis=0.2;
        disam=dis*total;
        total_amount=total-disam;
        printf("\nDiscount applied: 20%%");
        printf("\nThe total amount payable is: %.2f",total_amount);
    }
    else
    {
        printf("\nThe total amount payable is: %.2f",total);
    }
    printf("\nThis program is developed by DEV BUMTARIYA.");
}
