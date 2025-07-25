#include <stdio.h>

int main() {
    int score;

    // Input the student's score
    printf("Enter the student's score (0-100): ");
    scanf("%d", &score);

    // Determine the grade using else-if
    if (score >= 90 && score <= 100) {
        printf("Grade: A\n");
    }
    else if (score >= 80 && score < 90) {
        printf("Grade: B\n");
    }
    else if (score >= 70 && score < 80) {
        printf("Grade: C\n");
    }
    else if (score >= 60 && score < 70) {
        printf("Grade: D\n");
    }
    else if (score >= 0 && score < 60) {
        printf("Grade: F\n");
    }
    else {
        // Invalid input if score is outside 0-100 range
        printf("Invalid score entered. Please enter a value between 0 and 100.\n");
    }

    return 0;
}
