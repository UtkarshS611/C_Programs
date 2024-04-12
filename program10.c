#include <stdio.h>
// #include <conio.h>

int main() {
    int m1, m2, m3, m4, m5;
    double percentage;
    char grade;
    // clrscr();
    
    printf("Enter marks for five subjects:\n");
    printf("\nSubject Maths: ");
    scanf("%d", &m1);
    printf("\nSubject Physics: ");
    scanf("%d", &m2);
    printf("\nSubject Chemistry: ");
    scanf("%d", &m3);
    printf("\nSubject English: ");
    scanf("%d", &m4);
    printf("\nSubject Computer: ");
    scanf("%d", &m5);
    
    int totalMarks = m1 + m2 + m3 + m4 + m5;
    percentage = (float)totalMarks / 5;
    
    grade;
    if (percentage >= 90 && percentage <= 100) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 60) {
        grade = 'C';
    } else {
        grade = 'D';
    }
    
    printf("\nPercentage: %lf", percentage);
    printf("\nGrade: %c", grade);
    
    // getch();
    return 0;
}