#include <stdio.h>
int main()
{
    int temp,marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    printf("Marks is %d\n",marks);

    if(marks>100)
    {
        printf("\nDon't be smart! Enter your marks within the limit");
    }
    else
    {
        temp=marks/10;
        if(temp==6)
        {
            printf("\nYour grade is: D");
        }
        else if(temp==7)
        {
            printf("\nYour grade is: C");
        }
        else if(temp==8)
        {
            printf("\nYour grade is: B");
        }
        else if(temp==9)
        {
            printf("\nYour grade is: A");
        }
        else
        {
            printf("Fail");
        }
        return 0;
    }
    
}