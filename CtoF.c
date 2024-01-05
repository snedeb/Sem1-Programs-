// Write a C program to convert temperature given in Celsius to Fahrenheit and Fahrenheit to Celsius.

#include <stdio.h>
double celsiusToFahrenheit(double celsius) 
{
 return (celsius * 9.0/5.0) + 32.0;
}
double fahrenheitToCelsius(double fahrenheit) 
{
 return (fahrenheit - 32.0) * 5.0/9.0;
}
int main() 
{
 char choice;
 double temperature;
 printf("Enter temperature: ");
 scanf("%lf", &temperature);
 printf("Choose conversion:\n");
 printf("a. Celsius to Fahrenheit\n");
 printf("b. Fahrenheit to Celsius\n");
 printf("Enter your choice (a/b): ");
 scanf(" %c", &choice);
 switch (choice) 
 {
 case 'a':
 case 'A':
 printf("%.2lf Celsius is equal to %.2lf Fahrenheit.\n", temperature, celsiusToFahrenheit(temperature));
 break;
 case 'b':
 case 'B':
 printf("%.2lf Fahrenheit is equal to %.2lf Celsius.\n", temperature, fahrenheitToCelsius(temperature));
 break;
 default:
 printf("Invalid choice.\n");
 }
 return 0;
}
