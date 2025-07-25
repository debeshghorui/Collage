#include<stdio.h>
int main()
{
    int num1,num2,temp;

    printf("Enter the first number: ");
    scanf("%d",&num1);

    printf("Enter the second number: ");
    scanf("%d",&num2);
     // Before Swapping the Numbers.
    printf("\nBefore Swapping the Fist Number is %d and scend Number is %d",num1,num2);
     // Swapping using third variable.
    temp = num1;
    num1 = num2;
    num2 = temp;
     // After Swapping the Numbers.
    printf("\nThe swapped numbers are: %f and %f",num1,num2);

    return 0;
}