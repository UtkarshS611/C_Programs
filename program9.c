#include <stdio.h>
// #include <conio.h>

int main() {
    int year;
    // clrscr();
    printf("Enter the year: ");
    scanf("%d", &year);
    
    if (year % 4 == 0) {
        printf("\nThis year is a leap Year");
    } else {
        printf("\nThis year is not a leap year");
    }

    // getch();
    return 0;
}