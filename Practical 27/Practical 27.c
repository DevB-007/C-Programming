#include<stdio.h>
float sav(int);

int main()
{
    int n; float t;
    printf("Enter how many months savings you would like to see: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Please enter positive number.");
        printf("\nThis program is developed by Dev Bumtariya.");
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        printf("The saving of %d month would be: %.2f\n",i,sav(i));
    }
    printf("\nThis program is developed by Dev Bumtariya.");
    return 0;
}
float sav(int x)
{
    float total,i;
    if(x==1)
    {
        return 1;
    }
    else if(x==2)
    {
        return 1;
    }
    else
    {
        return sav(x-1)+sav(x-2);
    }
}
