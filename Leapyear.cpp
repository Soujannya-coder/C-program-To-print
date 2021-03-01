#include <stdio.h>
int main ()
{
int y;
printf("Enter the year : ");
scanf("%d",&y);
if((y>0)&&(y<=9999))
{

if((y%400==0)||(y%100!=0&&y%4==0))
printf("\n%d is a leap year",y);
else
printf("\n%d is not a leap year",y);
}
else
printf(" invalid year");

return 0;
}
