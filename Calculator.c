#include <stdio.h>
int main() {
    char cal;
    int a,b;
    printf("\nEnter 1st number: ");
    scanf("%d",&a);
    printf("\nEnter 2nd number: ");
    scanf("%d",&b);
    printf("\npress '+' for addition :");
    printf("\npress '-' for subtraction: ");
    printf("\npress '*' for multiplication: ");
    printf("\npress '/' for division : ");
    scanf(" %c",&cal);
    switch (cal) 
	{
    case '+':
        printf("%d + %d = %d", a,b, a+b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a-b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a*b);
        break;
    case '/':
    	if(b==0)
    	{
    		printf("undefined");
		}
		else
		{
        printf("%d / %d = %f", a, b, (float)a/(float)b);
   		}
		break;
    default:
        printf("\nnot possible");
    }

    return 0;
}
