#include<stdio.h>
int main()
{
	int*ptr;
	int arr[]={1,2,3,4};
	ptr=arr;
	printf("%d %d",arr[2+4-3],ptr[3]);
	return 0;
}
