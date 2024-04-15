#include <stdio.h>
// #include <conio.h>
#include <math.h>

int main() {
    float radius, circum, area;
    float PI = 3.1415926;

    // clrscr();

    printf("Radius: ");
    scanf("%f", &radius);
    circum = 2*PI*radius;
    // area = PI*radius*radius;
    area = PI*(pow(radius, 2));
    printf("\nCircumference is %f", circum);
    printf("\nArea is %f", area);

    // getch();

    return 0;
}
