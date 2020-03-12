#include<stdio.h>
int main()
{
    int amount, years;
    float rate, SI;
    printf("Enter the principle amount:");
    scanf("%d",&amount);
    printf("Enter the number of years:");
    scanf("%d",&years);
    printf("Enter the rate of interest:");
    scanf("%f",&rate);
    SI = (years*amount*rate)/100;
    printf("\nThe interest is: %f",SI);
    return 0;
}
