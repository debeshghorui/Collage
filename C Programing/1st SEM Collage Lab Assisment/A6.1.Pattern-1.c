/*
1
21
321
4321
*/
#include<stdio.h>

int main() {

    int Row;
    printf("Enter the number of rows :- ");
    scanf("%d",&Row);

    for (int i = 1; i <= Row; i++)
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