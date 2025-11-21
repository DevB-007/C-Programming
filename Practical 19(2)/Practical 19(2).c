#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("Output: \n");
    for(int i=1;i<=(n+1)/2;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==j||i+j==n+1)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("This program is developed by Dev Bumtariya.");
    return 0;
}
