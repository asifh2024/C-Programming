// Calculate Simple Interest

#include <stdio.h>

float calculateSI(float principal, float rate, float time) {
    float si = (principal * rate * time) / 100;
    return si;
}

int main() {
    float p, r, t;
    
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time period: ");
    scanf("%f", &t);
    
    printf("Simple Interest: %.2f\n", calculateSI(p, r, t));
    return 0;
}
