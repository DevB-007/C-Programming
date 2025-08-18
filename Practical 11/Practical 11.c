/* Program developed to determine the grade of a student based on marks using ternary operator.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float m;
    printf("Enter the marks: ");
    scanf("%f",&m);
    m=round(m);
    (m>=0 && m<=100)?
                     (m>=90)? printf("Grade A"):
                                                (m>=80)? printf("Grade B"):
                                                                           (m>=70)? printf("Grade C"):
                                                                                                      (m>=60)? printf("Grade D"):
                                                                                                                                  printf("Grade F")
                    : printf("Invalid marks entered.");
    printf("\nThis program is developed by DEV BUMTARIYA.");
}
