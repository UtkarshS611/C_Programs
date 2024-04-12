#include <stdio.h>
// #include <conio.h>
int main() {
    float temp;
    float fahren = 0;
    // clrscr();
    printf("Enter temp: ");
    scanf("%f", &temp);
   
    fahren = 32+(9/5.0*temp);
    printf("%f F", fahren);

    // getch();
    return 0;
}