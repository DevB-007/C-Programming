#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>0)
    {
        if (age<18)
        {
            printf("You are not eligible for opening an account.");
        }
        else if (age>=18 && age<60)
        {
            printf("You are eligible for opening an account.");
        }
        else
        {
            printf("You are eligible for an senior citizen account.");
        }
    }
    else
    {
        printf("Please enter a valid age.");
    }
    printf("\nThis program is developed by DEV BUMTARIYA.");
}
