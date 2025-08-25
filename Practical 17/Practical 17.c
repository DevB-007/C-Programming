/*This program is simulating an application which is tracking the distance covered by a runner per minute.
programmer - Dev Bumtariya
Last Updated - 25/08/2025*/
#include<stdio.h>
int main()
{
    int x=1;
    while(1)
    {
        printf("Minute %d: Distance covered = %.1f km\n",x,x*0.5);
        sleep(60);
        if(x==20)
        {
            break;
        }
        x++;
    }
    printf("Marathon complete!");
    printf("\nThis program is developed by Dev Bumtariya.");
    return 0;
}
