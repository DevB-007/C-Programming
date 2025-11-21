#include<stdio.h>
#include<math.h>
char tri(int,int,int);
void area(int,int,int,int,int,int);

int main()
{
    int l1,l2,l3;
    char t;
    printf("Enter the lengths of the 3 sides of the triangular plot: ");
    scanf( "%d %d %d", &l1,&l2,&l3);
    if(l1<0||l2<0||l3<0)
    {
        printf("The sides lengths must be positive.");
        goto g;
    }
    t=tri(l1,l2,l3);
    if(t==0)
    {
        printf("These sides won't make a triangle.\nThis is not a valid triangle");
    }
    g: printf("\nThis program is developed by Dev Bumtariya.");
    return 0;
}
char tri(int a,int b,int c)
{
    if(c<a+b)
    {
        if(b<a+c)
        {
            if(a<b+c)
                printf("These sides form a triangle.\nIt is a valid triangle.");
            else
                return 0;
        }
        else
            return 0;
    }
    else
        return 0;
    area(a,b,c,a,b,c);
}
void area(int p,int q,int r,int a,int b,int c)
{
    float s,ar;
    s=(p+q+r)/2.0;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nThe area of the triangle is: %.2f",ar);
}
