#include<stdio.h>
int main()
{
	int a,b=0;
	printf("Enter the value");
	scanf("%d" ,&a);
	while(a>0)
	{
		b=b+(a%10);
		a=a/10;
	}
	printf("Sum of digits in %d is %d" ,a,b);
	return 0;
	
}
