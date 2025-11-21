#include<stdio.h>

#define p printf
int main()
{
    int n;
    p("Menu: \n");
    p("1. Calculate length\n");
    p("2. Reverse a note\n");
    p("3. Compare two notes\n");
    p("4. Copy note\n");
    p("5. Concatenate two notes\n");
    p("6. Upper case converter\n");
    p("7. Lower case converter\n");
    p("8. Capitalize first letter of each sentence\n");
    p("0. to exit\n");
    p("Enter option number: ");
    scanf("%d",&n);
    getchar();
    if(n==0)
        goto y;
    char x[100];
    p("Enter a note:");
    fgets(x,100,stdin);
    switch (n)
    {
    case 1:
        {
        int l=0;
        for(int i=0;x[i]!='\0';i++)
        {
            l++;
        }
        p("The length of the note is: %d\n",l);
        break;}
    case 2:
        {
            int l=0;
            while (x[l]!='\0') l++;
            p("Reversed note:");
        for(int i=l-1;i>=0;i--)
        {
            p("%c",x[i]);
        }
        p("\n");
        break;}
    case 3:
        {
            char y[100];
            int i=0,j=0,l=0,g=0,t=0;
            printf("Enter the second note: ");
            fgets(y,100,stdin);
            while(x[l]!='\0')l++;
            while(y[g]!='\0')g++;
            for(int k=0;x[k]!='\0'||y[k]!='\0';k++)
            {
                if(x[k]-y[k]>0)
                {
                    p("%s",x);p("is greater than\n");p("%s",y);
                    t=1;
                    break;
                }
                else if(x[k]-y[k]<0)
                {
                    p("%s",x);p("is less than\n");p("%s",y);
                    t=1;
                    break;
                }
            }
            if(t==0)
                {
                    p("%s",x);p("is equal to\n");p("%s",y);
                }
            break;
        }
    case 4:
        {
            char y[100];int i=0;
            for(i=0;x[i]!='\0';i++)
            {
                y[i]=x[i];
            }
            y[i]='\0';
            p("Copied note: ");
            puts(y);
            break;
        }
    case 5:
        {
            char y[100],z[100];
            int i=0,j=0;
            p("Enter the second note: ");
            fgets(y,100,stdin);
            while(x[i]!='\0')
            {
                z[i]=x[i];
                i++;
            }
            while(y[j]!='\0')
            {
                z[i+j]=y[j];
                j++;
            }
            z[i+j]='\0';
            p("Concatenated note is: ");
            puts(z);
            break;
        }
    case 6:
        {
            for(int i=0;x[i]!='\0';i++)
            {
                if(x[i]>='a'&& x[i]<='z')
                {
                    x[i]-=32;
                }
            }
            p("Uppercase note: ");
            puts(x);
            break;
        }
    case 7:
        {
            for(int i=0;x[i]!='\0';i++)
            {
                if(x[i]>='A'&& x[i]<='Z')
                {
                    x[i]+=32;
                }
            }
            p("Lowercase note: ");
            puts(x);
            break;
        }
    case 8:
        {
            int cap=1;
            for(int i=0;x[i]!='\0';i++)
            {
                if(cap && x[i]>='a' && x[i]<='z')
                {
                    x[i]-=32;
                    cap=0;
                }
                else if(x[i]=='.' || x[i]=='?' || x[i]=='!')
                {
                    cap=1;
                }
                else if(x[i]!=' ' && x[i]!='\n')
                {
                    cap=0;
                }
            }
            p("Capitalized note: ");
            puts(x);
            break;
        }
    default:
        p("Please enter valid input. ");
    }
y:
    p("Thank you!!!\n");
    p("This program is developed by Dev Bumtariya.");
    return 0;
}
