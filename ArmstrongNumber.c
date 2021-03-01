#include <stdio.h>
#include <math.h>

int main(){
    int n,rem,sum=0,temp,d=0;
    printf("\nEnter the number(an integer): ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
    	n=n/10;
    	d++;
	}
    while(n>0)
    {
        rem=n%10;
        sum+=pow(rem,3);
        n=n/10;
    }
    if(temp==sum)
    printf("%d is an armstrong number",temp);
    else
    printf("%d is not an armstrong number",temp);
    return 0;
}
