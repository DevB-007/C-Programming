#include<stdio.h>
int main()
{
    int x[25],p=0,n=0,e=0,o=0;
    for(int i=0; i<25; i++)
    {
        printf("Enter a entry: ");
        scanf("%d",&x[i]);
    }
    for(int j=0; j<25; j++)
    {
        if(x[j]>0)
        {
            p++;
        }
        else
        {
            n++;
        }
        if(x[j]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("Total positive numbers: %d\n",p);
    printf("Total negative numbers: %d\n",n);
    printf("Total even numbers: %d\n",e);
    printf("Total odd numbers: %d\n",o);
    printf("This program is developed by Dev Bumtariya.");
    return 0;
}
