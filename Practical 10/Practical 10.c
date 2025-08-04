#include<stdio.h>
int main()
{
    int choice,x;
    float subtotal=0,total=0;
    printf("Welcome to foodies restaurant.");
    printf("\nMENU");
    printf("\n1. Burger - Rs 150");
    printf("\n2. Pizza - Rs 200");
    printf("\n3. Pasta - Rs 120");
    printf("\n4. Sandwich - Rs 100");
    printf("\n5. French Fries - Rs 80");
    printf("\nEnter 0 to finish ordering.");
    x: printf("\nEnter the option you want to order: ");
    scanf("%d",&choice);
    switch (choice)
    {
        case (1):
            printf("\nBurger added to order.");
            subtotal+=150;
            printf("\nYour subtotal is %.2f",subtotal);
            break;
        case (2):
            printf("\nPizza added to your order.");
            subtotal+=200;
            printf("\nYour subtotal is: %.2f",subtotal);
            break;
        case (3):
            printf("\nPasta added to your order.");
            subtotal+=120;
            printf("\nYour subtotal is: %.2f",subtotal);
            break;
        case (4):
            printf("\nSandwich added to your order.");
            subtotal+=100;
            printf("\nYour subtotal is: %.2f",subtotal);
            break;
        case (5):
            printf("\nFrench Fries added to your order.");
            subtotal+=80;
            printf("\nYour subtotal is: %.2f",subtotal);
            break;
        default:
            printf("Enter valid option.");
    }
    total=subtotal;
    printf("\nEnter 1 to continue ordering and 0 to finish ordering: ");
    scanf("%d",&x);
    if (x==1)
        goto x;
    else
        printf("Total bill is: %.2f Rupees",total);
    printf("\nThis program is developed by DEV BUMTARIYA.");
    return 0;
}
