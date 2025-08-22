/*This program is stimulating a 21 matchstick game.*/
#include<stdio.h>
int main()
{
    int ms=21,x,i;
    printf("Welcome to Matchstick game.");
    printf("\nRules: \n1. The game starts with 21 matchsticks. \n2. You can pick 1, 2, 3 or 4 matchsticks.");
    printf("\n3. The player who chooses the last matchstick loses the game.\n");
    while(ms>=0)
    {
        printf("Make your pick: ");
        scanf("%d",&x);
        if (x==1 || x==2 || x==3 || x==4)
        {
            ms=ms-x;
            sleep(1);
            i=5-x;
            ms=ms-i;
            printf("Computer picked %d matchsticks.\n",i);
            printf("%d matchsticks are left.\n",ms);
            if(ms==1)
            {
                printf("You have to choose the last matchstick. \nYou LOSE.");
                printf("\nComputer wins the game.");
                break;
            }
        }
        else
            printf("Please select between 1, 2, 3 or 4 matchsticks.\n");
    }
printf("\nThis program is developed by DEV BUMTARIYA.");
    return 0;
}
