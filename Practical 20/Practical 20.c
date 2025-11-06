#include<stdio.h>
int main()
{
    int n,totalids,sum=0,missingid;
    printf("Enter the number of participants: ");
    scanf("%d",&n);
    totalids=n*(n+1)/2;
    int x[n-1];
    for(int i=0;i<n-1;i++)
    {
        printf("Enter the unique ID: ");
        scanf("%d",&x[i]);
        if(x[i]>n || x[i]<1)
        {
            printf("Please enter valid ID.\n");
            i--;
        }
        for(int j=0;j<i;j++)
        {
            if(x[j]==x[i])
            {
                printf("ID already entered.Please enter another one.\n");
                i--;
            }
        }
    }
    for(int k=0;k<n-1;k++)
    {
        sum+=x[k];
    }
    missingid=totalids-sum;
    printf("The missing ID is: %d",missingid);
    printf("\nThis program is developed by Dev Bumtariya.");
    return 0;
}
