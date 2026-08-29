#include<stdio.h>
int main () {
    // calculating the area of the circle
    float radius;
    printf("enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("The area of the circle is %f\n", 3.14*radius*radius);
    return 0;
}