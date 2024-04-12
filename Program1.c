#include <stdio.h>
// #include <conio.h>

int main() {
    int math, phy, chem, eng, cs;
    double sum, perc;

    // clrscr();
    
    printf("Enter marks in Maths: ");
    scanf("%d", &math);
    printf("\n");
    printf("Enter marks in Physics: ");
    scanf("%d", &phy);
    printf("\n");
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chem);
    printf("\n");
    printf("Enter marks in English: ");
    scanf("%d", &eng);
    printf("\n");
    printf("Enter marks in Computer Science: ");
    scanf("%d", &cs);
    
    sum = math + phy + chem + eng + cs;
    perc = sum * 0.2;
    
    printf("\nTotal Marks: %lf", sum);
    printf("\nPercentage: %lf", perc );
    
    // getch();

    return 0;
}