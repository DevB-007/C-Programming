#include<stdio.h>
int main()
{
    int n,x,y;
    printf("Enter any number: ");
    scanf("%d",&n);
    x=1;
    y=n;
    for(int i=1; i<=2*n-1; i++)
    {
        if(i<=n)
        {
            for(int j=1; j<x; j++)
            {
                printf(" ");
            }
            for(int k=y; k>0; k--)
            {
                printf("%d",k);
            }
            for(int h=2; h<=y; h++)
            {
                printf("%d",h);
            }
            y--; x++;
        }
        else
        {
            x--;
            for(int j=x-2; j>0; j--)
            {
                printf(" ");
            }
            for(int k=y+2; k>0; k--)
            {
                printf("%d",k);
            }
            y++;
            for(int h=2; h<=y+1; h++)
            {
                printf("%d",h);
            }
        }
        printf("\n");
    }
    return 0;
}
