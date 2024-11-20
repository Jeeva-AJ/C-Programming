#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,a,CI;
    
    int t,y;
    
    printf("Enter the principal amount :\n");
    scanf("%lf",&p);
    printf("enter the annual interest rate in percentage :\n");
    scanf("%lf",&r);
    printf("enter t\n");
    scanf("%d",&t);
    printf("enter y\n");
    scanf("%d",&y);
    a=p*pow((1+(r/100)),t*y);
    CI=a-p;
    printf("total after%.2f y:%.2f\n",y,a);
    printf("compound i :%.2f",CI);
    return 0;
}



