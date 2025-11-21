#include<stdio.h>

int main()
{
    int n,y,x;
    printf("Enter any number: ");
    scanf("%d",&n);
    x=1;
    y=n-1;
    for(int i=1; i<=2*n-1; i++)
    {
        if(i<=n)
        {
            for(int j=y; j>0; j--)
            {
                printf(" ");
            }
            for(int k=1; k<=x; k++)
            {
                printf("%c",64+k);
            }
            for(int h=x-1; h>0; h--)
            {
                printf("%c",64+h);
            }
            x++;
            y--;
        }
        else
        {
            for(int j=1; j<=i-n; j++)
            {
                printf(" ");
            }
            for(int k=1; k<=n+y; k++)
            {
                printf("%c",64+k);
            }
            y--;
            for(int h=x-3; h>0; h--)
            {
                printf("%c",64+h);
            }
            x--;
        }
        printf("\n");
    }
    printf("This program is developed by Dev Bumtariya");

    return 0;
}
