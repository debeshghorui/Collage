/*
1234
123
12
1
*/
#include<stdio.h>

int main() {

    int Row;
    printf("Enter the number of rows :- ");
    scanf("%d",&Row);

    for (int i = Row; i >= 1; i--)
    {
        int temp = 1;
        for (int j = 1; j <= i ; j++)
        {
            printf("%d",temp);
            temp++;
        }
        printf("\n");
    }
    return 0;
}