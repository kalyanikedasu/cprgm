#include <stdio.h>
float celsiusToFahrenheit(float celsius)	//c-f//
{
    return (celsius * 9/5) + 32;
}
float fahrenheitToCelsius(float fahrenheit)	//f-c//
{
    return (fahrenheit - 32) * 5/9;
}

void main()
{
    int choice;
    float temperature;
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temperature);
            printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, celsiusToFahrenheit(temperature));
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, fahrenheitToCelsius(temperature));
            break;
        default:
            printf("Invalid choice.\n");
    }
}     

