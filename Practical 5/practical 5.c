#include<stdio.h>
int main()
{
    long long population=1441981744, wm, men, limen, ilmen, liwm, ilwm;
    printf("The total population is: %lld\n", population);
    wm=(population*48.4)/100;
    printf("The total number of women is: %lld\n",wm);
    men=population-wm;
    printf("The total population of men is: %lld\n",men);
    limen=(men*80.95)/100;
    printf("The number of literate men is: %lld\n",limen);
    ilmen=men-limen;
    printf("The number of illiterate men is: %lld\n",ilmen);
    liwm=(wm*62.84)/100;
    printf("The number of literate women is: %lld\n",liwm);
    ilwm=wm-liwm;
    printf("The number of illiterate women is: %lld\n",ilwm);
    printf("This program is developed by Dev Bumtariya.");
    return 0;
}
