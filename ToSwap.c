#include<stdio.h>
int main()
{
int a, b;
printf("Enter the value of a: \n");
scanf("%d",&a);
printf("Enter the value of b: \n");
scanf("%d",&b);
printf("Before swapping the value of a & b: %d %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swapping the value of a & b: %d %d",a,b);
return 0;
}
