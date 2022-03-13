#include<iostream>
class s
{
	int a;
    float b;
	void f1();
	
	
	
};
int main()
{
	struct s c;
	c.a=30;
	c.b=78.7;
	int d;
	d=sizeof(c);
	printf("%d",d);
}
