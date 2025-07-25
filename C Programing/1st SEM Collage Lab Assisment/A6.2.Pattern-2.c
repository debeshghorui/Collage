/*
4321
321
21
1
*/
#include<stdio.h>

int main() {

    int Row;
    printf("Enter the number of rows :- ");
    scanf("%d",&Row);

    for (int i = Row; i >= 1; i--)
    {
        int temp = i;
        for (int j = 1; j <= i ; j++)
        {
            printf("%d",temp);
            temp--;
        }
        printf("\n");
    }
    return 0;
}