#include<stdio.h>
int main()
{
    float num1,num2,num3,sum,avarage;

    printf("Enter fist number: ");
    scanf("%f",&num1);
    printf("\nEnter second number: ");
    scanf("%f",&num2);
    printf("\nEnter third number: ");
    scanf("%f",&num3);

    sum = num1 + num2 + num3;
    avarage = sum / 3;

    printf("\nSum of three numbers is %.2f",sum);
    printf("\nAverage of three numbers is %.2f",avarage);

    return 0;
}