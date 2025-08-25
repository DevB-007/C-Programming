#include<stdio.h>
int main()
{
    int x;
    for(x=1;x<=20;x++)
    {
        printf("Minute %d: Distance covered = %.1f km\n",x,x*0.5);
        sleep(60);
    }
    printf("Marathon complete!");
printf("\nThis program is developed by Dev Bumtariya.");
return 0;
}
