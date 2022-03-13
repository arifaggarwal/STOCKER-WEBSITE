#include<stdio.h>
int main()
{
	int rollno,name,marks,grade;
	printf("Enter the roll number");
	scanf("%d" ,&rollno);
	printf("Enter the name of student");
	scanf("%d" ,&name);
	
	if(marks>=90)
	{
		grade='A';
	}
	else
	{
		grade='B';
	}
	printf("Enter the marks");
	scanf("%d" ,&marks);
	printf("%d%d%d%d" ,rollno,name,marks,grade);
	return 0;
}
