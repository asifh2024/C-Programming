// Find Largest Element in Array

#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 7};  
    int n = 5;  
    int max = arr[0]; 
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i]; 
        }
    }
    
    printf("Largest element: %d\n", max);
    return 0;
}
