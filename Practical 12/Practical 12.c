#include<stdio.h>
int main()
{
    for(int x=1;x<=50;x++)
    {
        if (x%5==0)
            printf("\nBook ID: %d \(Special Edition\)",x);
        else
            printf("\nBook ID: %d",x);
    }
    printf("\nThis program is developed by DEV BUMTARIYA.");
    return 0;
}
