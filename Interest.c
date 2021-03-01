#include <stdio.h>
#include <math.h>
int main()
{
int r, t;
float p, ci;
double temp;
printf ("\nEnter the principle amount: ");
scanf ("%f", &p);
printf ("\nEnter the rate: ");
scanf ("%d", &r);
printf ("\nEnter the time in years: ");
scanf ("%d", &t);

temp=pow(1+(float)r/100,t);
ci=temp*p;

printf ("\ncompound Interest is %0.2f", ci);

return 0;
}
