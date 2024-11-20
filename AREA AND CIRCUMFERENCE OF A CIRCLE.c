#include<stdio.h>
#include <math.h>
int main()
{
    float radius,area,circumference;
    const float pi=3.14159;
    printf ("r:");
    scanf("%f",&radius);
    area = pi*radius*radius;
    circumference = 2 *pi*radius;
    printf("area=%.2f\n",area);
    printf("circumference =%.2f",circumference);
    return 0;
}
