#include<stdio.h>
int main()
{
    float side_a,side_b,side_c;
    printf("Enter the value of three sides: ");
    scanf("%f%f%f",&side_a,&side_b,&side_c);    

     // Calculate the perimeter of the triangle
    float perimeter = side_a + side_b + side_c;
    // Calculate the area of the triangle.
    //float area = ;

    // Print out the results to the console window.
    printf("The perimeter is %.2f\n",perimeter);
}