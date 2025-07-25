#include <stdio.h>

int main() {
    int marks;
    int gradeCategory;

    // Input the marks of the student
    printf("Enter the marks obtained (0-100): ");
    scanf("%d", &marks);

    // Determine the grade category by dividing marks by 10
    gradeCategory = marks / 10;

    // Use switch case to determine the grade
    switch (gradeCategory) {
        case 10:  // For marks 100
        case 9:   // For marks 90-99
            printf("The grade is: A+\n");
            break;
        case 8:   // For marks 80-89
            printf("The grade is: A\n");
            break;
        case 7:   // For marks 70-79
            printf("The grade is: B+\n");
            break;
        case 6:   // For marks 60-69
            printf("The grade is: B\n");
            break;
        case 5:   // For marks 50-59
            printf("The grade is: C+\n");
            break;
        case 4:   // For marks 40-49
            printf("The grade is: D\n");
            break;
        case 3:   // For marks 30-39
        case 2:   // For marks 20-29
        case 1:   // For marks 10-19
        case 0:   // For marks 0-9
            printf("The grade is: Fail\n");
            break;
        default:
            printf("Invalid marks entered.\n");
            break;
    }

    return 0;
}