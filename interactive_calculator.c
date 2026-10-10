#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    printf("--- Interactive Addition Calculator ---\n");
    
    // Asking the user for the first number
    printf("Enter the first number: ");
    scanf("%d", &num1); // Reads an integer and stores it in num1
    
    // Asking the user for the second number
    printf("Enter the second number: ");
    scanf("%d", &num2); // Reads an integer and stores it in num2
    
    // Calculating the sum
    sum = num1 + num2;
    
    // Displaying the final result
    printf("\nResult: %d + %d = %d\n", num1, num2, sum);
    
    return 0;
}
