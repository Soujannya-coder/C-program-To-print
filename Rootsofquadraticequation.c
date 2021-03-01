#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float r1,r2;
    printf("\nEnter the value of a(integer):");
    scanf("%d",&a);
    printf("\nEnter the value of b(integer):");
    scanf("%d",&b);
    printf("\nEnter the value of c(integer):");
    scanf("%d",&c);
    if(a==0)
    {
        printf("Not a quadratic equation");
        
    }
    else
    {
        d=b*b-4*a*c;
        if(d<0)
        {
            printf("Roots are imaginary");
        }
        else
        {
            if(d==0)
            {
                r1=-b/(2.0*a);
                printf("\nThe roots are equal");
                printf("\nRoots are equal and the root is :%0.2lf",r1);
                
            }
            else
            {
                r1=(-b+sqrt(d)) /(2.0*a);
                r2=(-b-sqrt(d)) /(2.0*a);
                printf("\nThe 1st root is : %0.2lf",r1);
                printf("\nThe 2nd root is : %0.2lf",r2);
                
            }
        }
    }
    return 0;
    
}
