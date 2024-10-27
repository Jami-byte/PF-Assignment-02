#include <stdio.h>

int main() {
    float marks1, marks2, marks3, average;

    printf("Enter marks for Subject 1: ");
    scanf("%f", &marks1);
    printf("Enter marks for Subject 2: ");
    scanf("%f", &marks2);
    printf("Enter marks for Subject 3: ");
    scanf("%f", &marks3);

    average = (marks1 + marks2 + marks3) / 3.0;

    printf("Average marks: %.2f\n", average);

    if (average >= 90) {
        printf("Grade: A\n");
    } else if (average >= 80) {
        printf("Grade: B\n");
    } else if (average >= 70) {
        printf("Grade: C\n");
    } else if (average >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

