#include<stdio.h>
int main()
{
    int num1,num2,num3,LARGEST;
    printf("Enter first Number  :\n");
    scanf("%d",&num1);
    printf("Enter second Number  :\n");
    scanf("%d",&num2);
    printf("Enter third Number  :\n");
    scanf("%d",&num3);
    if (num1>num2&&num1>num3)
    LARGEST =num1; 
    else if(num2>num1&&num2>num3)
    LARGEST =num2; 
    else
    LARGEST =num3; 
    printf("The Largest number is %d",LARGEST);
    return 0;
    
}
