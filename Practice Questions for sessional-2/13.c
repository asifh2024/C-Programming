// Print Hello Message

#include <stdio.h>

void printHello(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    char name[50];  // Array to store name
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    printHello(name); 
    return 0;
}
