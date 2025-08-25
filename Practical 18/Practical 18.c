/*This program is for printing multiplication table with user inputted rows and columns.
programmer - Dev Bumtariya
Last Updated - 25/08/2025 */
#include<stdio.h>
int main()
{
    int v,h,x,y;
    printf("Enter the size of the table vertically: ");
    scanf("%d",&v);
    printf("Enter the size of the table horizontally: ");
    scanf("%d",&h);
    printf("\n");
    if(v>0 && h>0)
    {
        for(x=1; x<=v; x++)
        {
            for(y=1; y<=h; y++)
            {
                printf("%4d",x*y);
            }
            printf("\n");
        }
    }
    else
        printf("Please enter valid inputs.");

    printf("\nThis program is Dev Bumtariya.");
    return 0;
}
