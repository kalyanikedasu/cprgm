#include <stdio.h>
#include "cal.h"
void main()
{
    int choice;
    int a, b;
    float result;
    while (1) 
    {
        printf("\n=== Calculator Menu ===\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            // Clear input buffer
            while (getchar() != '\n');
            printf("Invalid input! Please enter a number.\n");
            continue;
        }

        if (choice == 5) {
            printf("Exiting calculator.\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Try again.\n");
            continue;
        }

        printf("Enter two numbers: ");
        if (scanf("%d %d", &a, &b) != 2) {
            while (getchar() != '\n'); // flush
            printf("Invalid input for numbers. Try again.\n");
            continue;
        }

        switch (choice) {
            case 1:
                result = add(a, b);
                break;
            case 2:
                result = subtract(a, b);
                break;
            case 3:
                result = multiply(a, b);
                break;
            case 4:
    
    		result = divide(a, b);
                break;
        }

        printf("Result = %.2f\n", result);
    }

}

