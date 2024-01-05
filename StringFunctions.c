#include <stdio.h>
#include <string.h>
int main() 
{
 char str1[100], str2[100];
 printf("Enter a string: ");
 scanf("%s", str1);
 printf("Length of the string: %lu\n", strlen(str1));
 strcpy(str2, str1);
 printf("Copied string using strcpy(): %s\n", str2);
 printf("Enter another string: ");
 scanf("%s", str2);
 int cmpResult = strcmp(str1, str2);
 if (cmpResult == 0)
 printf("Strings are equal.\n");
 else if (cmpResult < 0)
 printf("First string is less than the second string.\n");
 else
 printf("First string is greater than the second string.\n");
 strcat(str1, str2);
 printf("Concatenated string using strcat(): %s\n", str1);
 return 0;
}
