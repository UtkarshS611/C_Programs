#include <stdio.h>

int main() {
    double a, b, c;
    // clrscr();

    printf("\nenter two numbers:");
    
    scanf("%lf%lf", &a, &b);
    
    c = a;
    a = b;
    b = c;
    printf("%lf %lf", a, b);

    // getch();
    return 0;
}