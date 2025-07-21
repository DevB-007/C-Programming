#include<stdio.h>
int main()
{
    float ht,wt,BMI;
    printf("Welcome to BMI calculator.\n");
    printf("Enter your Weight(kg): ");
    scanf("%f",&wt);
    printf("Enter your Height(m): ");
    scanf("%f",&ht);
    BMI=wt/((ht)*(ht));
    printf("Your BMI is: %f \n",BMI);
    if (BMI<18.5)
    {
        printf("You are underweight.");
    }
    else if (BMI>=18.5 & BMI<24.9)
    {
        printf("You are Healthy.");
    }
    else if (BMI>=24.9 & BMI<29.9)
    {
        printf("You are overweight.");
    }
    else
    {
        printf("You are obese.");
    }
    printf("\nThis program is developed by Dev Bumtariya.");
    return 0;
}
