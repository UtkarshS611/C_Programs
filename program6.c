#include <stdio.h>
// #include <conio.h>

int main() {
    int num1, num2;
    // clrscr();
    
    printf("\nEnter first number: ");
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);
    
    if(num1 == num2) {
        printf("\nEqual");
    } else {
        printf("\nNot Equal");
    }
    
    // getch();
    return 0;
}