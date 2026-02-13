#include<stdio.h>
int main() {
    int score;
    printf("Enter the student's score (0-100): ");
    scanf("%d",&score);
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else if (score >= 50) {
        printf("Grade: E\n");
    } else if (score >= 40) {
        printf("Grade: F\n");
    } else {
        printf("FAIL");
    }
    return 0;
}