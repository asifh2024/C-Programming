// Sum of First N Natural Numbers

#include <stdio.h>

int main() {
    int n;      
    int sum = 0; 
    
    printf("Enter N: ");
    scanf("%d", &n);
    
    // Add numbers from 1 to n
    for(int i = 1; i <= n; i++) {
        sum = sum + i;  // Add current number to sum
    }
    
    printf("Sum = %d\n", sum);
    return 0;
}
