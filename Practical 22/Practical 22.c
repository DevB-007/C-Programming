#include<stdio.h>
int main()
{
    char a[5][10]={0};
    int n;
    printf("Enter the number of seats you want to reserve: ");
    scanf("%d",&n);
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the row and seat number for reserved seat %d: ",i+1);
        scanf("%d %d",&x[i],&y[i]);
        if (x[i]<1 || x[i]>5 || y[i]<1 || y[i]>10)
        {
            printf("Invalid input.Please re-enter valid input.\n");
            i--;
        }
    }
    for(int j=0;j<n;j++)
    {
        a[x[j]-1][y[j]-1]='X';
    }
    printf("Seating Chart: \n");
    for(int i=0;i<5;i++)
    {
        printf("Row %d: ",i+1);
        for(int j=0;j<10;j++)
        {
            if(a[i][j]!=0)
            {
                printf("%c ",a[i][j]);
            }
            else
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    printf("This program is developed by Dev Bumtariya.");
    return 0;
}
