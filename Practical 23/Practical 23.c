#include<stdio.h>
int main()
{
    int n,min,max=0,profit=0,x;
    printf("Enter number of days price is known: ");
    scanf("%d",&n);
    int prices[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the price of %d day: ",i+1);
        scanf("%d",&prices[i]);
    }
    min=prices[0];
    for(int j=1;j<n;j++)
    {
        if(prices[j]<min)
        {
            min=prices[j];
            x=j;
        }
    }
    for(int k=x+1;k<n;k++)
    {
        if(prices[k]>min && prices[k]>max)
        {
            max=prices[k];
        }
    }
    if(max!=0)
    {
        profit=max-min;
        printf("The profit is: %d\n",profit);
    }
    else
    {
        printf("The profit is: 0\n");
    }
    printf("This program is developed by Dev Bumtariya.");
    return 0;
}
