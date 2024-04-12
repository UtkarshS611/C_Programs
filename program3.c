#include <stdio.h>
// #include <conio.h>
#define PI 3.1415926

float myfunc(float r) {  
float a;
a=2*PI*r;
return(a);
}

float myfunc1(float r) {
float s;
s=PI*r*r;
return(s);
}

int main() {
    float radius, circum, area;
    float myfunc(float radius);

    // clrscr();

    printf("Radius: ");
    scanf("%f", &radius);
    circum = myfunc(radius);
    area = myfunc1(radius);
    printf("\nCircumference is %f", circum);
    printf("\nArea is %f", area);

    // getch();

    return 0;
}