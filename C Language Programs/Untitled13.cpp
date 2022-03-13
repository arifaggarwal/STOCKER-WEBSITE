#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("Enter three digits");
	scanf("%f%f%f" ,&a,&b,&c);
	if(a>=b){
		if(a>=c)
		printf("Largest No. %f" ,a);
		else 
		printf("Largest No. %f" ,c);
	}
	{
		if(b>=c)
		printf("Largest No. %f" ,b);
		else
		printf("Largest No. %f" ,c);
	}
	return 0;
}
