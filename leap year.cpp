#include<stdio.h>
int main()
{
	int year;
	printf("Enter a Year:");
	scanf("%d",&year);
	if (year % 400 == 0)
	{
		printf("%d is Anniversary Leap Year",year); 
	}
	else if (year % 100 == 0)
	{
		printf("%d is not Anniversary Leap Year",year);
	}
	else if (year % 4 == 0)
	{
		printf("%d is Anniversary Leap Year",year);
	}
	else 
	{
		printf("%d is not Anniversary Leap Year",year);
	}
	return 0;
}
