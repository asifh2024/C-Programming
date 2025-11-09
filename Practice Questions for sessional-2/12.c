//  Calculate Area of Circle

#include <stdio.h>

float circleArea(float radius) {
    float pi = 3.14159;
    float area = pi * radius * radius;
    return area;
}

int main() {
    float radius;
    
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    printf("Area of circle: %.2f\n", circleArea(radius));
    return 0;
}
