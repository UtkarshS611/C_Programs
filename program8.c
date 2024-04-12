#include <stdio.h>
// #include <conio.h>

int main() {
    int num;
    // clrscr();

    printf("Enter the number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("\nThis number is even");
    } else {
        printf("\nThis number is odd");
    }

    // getch();
    return 0;
}