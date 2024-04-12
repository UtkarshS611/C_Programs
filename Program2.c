#include <stdio.h>
// #include <conio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest , compound_interest;

    // clrscr();
    
    printf("Enter the Principal Amount: ");
    scanf("%lf", &principal);
    
    printf("Enter the Rate of Interest (in percentage): ");
    scanf("%lf", &rate);
    
    printf("Enter the Time (in years): ");
    scanf("%lf", &time);
    
    simple_interest = (principal * rate * time) / 100;
    
    compound_interest = principal * (pow(1 + rate / 100, time)) - principal;
    
    printf("\nSimple Interest: %lf", simple_interest);
    printf("\nCompound Interest: %lf", compound_interest);

    // getch();
    
    return 0;
}