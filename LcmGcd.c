#include <stdio.h>
void calculateGCDandLCM(int num1, int num2, int *gcd, int *lcm) 
{
 int i, max;
 max = (num1 > num2) ? num1 : num2;
 for (i = 1; i <= max; i++) 
 {
    if (num1 % i == 0 && num2 % i == 0)
    *gcd = i;
 }
  *lcm = (num1 * num2) / *gcd;
}
int main() 
{
 int num1, num2, gcd, lcm;
 printf("Enter first number: ");
 scanf("%d", &num1);
 printf("Enter second number: "); 
 scanf("%d", &num2);
 calculateGCDandLCM(num1, num2, &gcd, &lcm);
 printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
 printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
 return 0;
}
