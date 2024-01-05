#include <stdio.h>
int isPalindrome()
{
    int num,reversedNum=0,originalNum;
    printf("Enter a number: ");
    scanf("%d",&num);
    originalNum=num;
    while(num!=0)
    {
        int remainder=num%10;
        reversedNum=reversedNum*10+remainder;
        num/=10;
    }
    if(originalNum==reversedNum)
    return -1;
    else
    return 0; 
}
int main()
{
    int result;
    result=isPalindrome();
    if(result)
    {
        printf("The number is a palindrome");
    }
    else{
        printf("The number is not a palindrome.\n");
    }
    return 0;
}