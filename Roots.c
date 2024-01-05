#include <stdio.h>
#include <math.h>
int main()
{
    double root1,root2,discriminant,a,b,c;
    printf("Enter the numbers: ");
    scanf("%lf%lf%lf",&a,&b,&c);

    if(discriminant==0)
    {
        root1=-b/2*a;
        root2=-b/2*a;
        printf("The roots of %lf%lf",root1,root2);
    }
    else if(discriminant>0)
    {
        root1=-b+sqrt(discriminant)/2*a;
        root2=-b-sqrt(discriminant)/2*a;
        printf("The roots are distinct. Values are %lf%lf",root1,root2);
    }
    else{
        printf("The roots are imaginary");
    }
    return 0;
}