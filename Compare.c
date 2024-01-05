#include <stdio.h>
int compareStrings(char str1[], char str2[]) 
{
 int i = 0;
 while (str1[i] != '\0' && str2[i] != '\0') 
 {
    if (str1[i] != str2[i]) 
    {
        return str1[i] - str2[i];
    }
    i++;
 }
 return str1[i] - str2[i];
}
int main() 
{
 char str1[100], str2[100];
 printf("Enter the first string: ");
 scanf("%s", str1);
 printf("Enter the second string: ");
 scanf("%s", str2);
 int result = compareStrings(str1, str2);
 if (result == 0) 
 {
    printf("Strings are equal.\n");
 } 
 else if (result < 0) 
 {
     printf("First string is less than the second string.\n");
 } 
 else 
 {
    printf("First string is greater than the second string.\n");
 }
 return 0;
}