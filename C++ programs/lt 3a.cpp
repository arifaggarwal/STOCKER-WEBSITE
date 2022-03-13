#include<stdio.h>
struct s
{
	int a;
	char b,c,d,e,f;
}I;
void main()
{
	struct s c;
	c.a=30;
	c.b=78.7;
	int d;
	d=sizeof(c);
	printf("%d",d);
}
