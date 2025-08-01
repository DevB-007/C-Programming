//THIS PROGRAM IS A TEMPERATURE CONVERTER.
#include<stdio.h>
int main()
{
    int in;
    printf("Welcome to Temperature Converter.");
    printf("\n        LIST: ");
    printf("\n1.Celsius to Fahrenheit");
    printf("\n2.Celsius to Kelvin");
    printf("\n3.Fahrenheit to Celsius");
    printf("\n4.Fahrenheit to Kelvin");
    printf("\n5.Kelvin to Celsius");
    printf("\n6.Kelvin to Fahrenheit");
    printf("\nEnter the option: ");
    scanf("%d",&in);
    if (in==1)
    {
        float cel,fah;
        printf("Enter the value of temperature in Celsius: ");
        scanf("%f",&cel);
        fah=((cel*9)/5)+32;
        printf("The temperature in Fahrenheit is: %.2f",fah);
    }
    else if (in==2)
    {
        float cel,kel;
        printf("Enter the value of temperature in Celsius: ");
        scanf("%f",&cel);
        kel=cel+273.15;
        printf("The temperature in Kelvin is: %.2f",kel);
    }
    else if (in==3)
    {
        float cel,fah;
        printf("Enter the value of temperature in Fahrenheit: ");
        scanf("%f",&fah);
        cel=((fah-32)*5)/9;
        printf("The temperature in Celsius is: %.2f",cel);
    }
    else if (in==4)
    {
        float fah,cel,kel;
        printf("Enter the value of temperature in Fahrenheit: ");
        scanf("%f",&fah);
        cel=((fah-32)*5)/9;
        kel=cel+273.15;
        printf("The temperature in Kelvin is %.2f",kel);
    }
    else if (in==5)
    {
        float kel,cel;
        printf("Enter the value of temperature in Kelvin: ");
        scanf("%f",&kel);
        cel=kel-273.15;
        printf("The temperature in Celsius is: %.2f",cel);
    }
    else if (in==6)
    {
        float kel,cel,fah;
        printf("Enter the value of temperature in Kelvin: ");
        scanf("%f",&kel);
        cel=kel-273.15;
        fah=((cel*9)/5)+32;
        printf("The temperature in Fahrenheit is: %.2f",fah);
    }
    else
        printf("Please enter a valid option.");
    printf("\nThis program is developed by DEV BUMTARIYA.");
    return 0;
}
