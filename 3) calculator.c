#include<stdio.h>
void main()
{
    int number1, number2, option, answer;
    printf("Welcome\nEnter 2 numbers");
    scanf("%d %d", &number1, &number2);
    printf("Now select the action you want to perform :\n1-Add\n2-Subtract\n3-Mutiply\n4-Divide");
    scanf("%d", &option);
    switch(option)
    {
        case 1 : 
			answer = number1+ number2;
            printf("The sum is : %d", answer);
            break;
        case 2 :
			answer = number1 - number2;
            printf("The difference is : %d", answer);
            break;
        case 3 :
			answer = numbebr1*number2;
            printf("The product is : %d", answer);
            break;
        case 4 :
			answer = number1/number2;
            printf("The quotient is : %d", answer);
            break;
    }
}
