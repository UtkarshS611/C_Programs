#include <stdio.h>
// #include <conio.h>

int main() {
    int x, y, z, max;
    // clrscr();

    printf("Enter first number: ");
    scanf("%d", &x);
    
    printf("Enter second number: ");
    scanf("%d", &y);
    
    printf("Enter third number: ");
    scanf("%d", &z);
    if (x > y)
     max = x;
    else max = y;
   
    if (max > z)
        printf("\nThe largest value is %d.", max);
    else
        printf("\nThe largest value is %d.", z);

    // getch();
    return 0;
}