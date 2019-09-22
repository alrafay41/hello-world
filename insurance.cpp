#include<stdio.h>
int main()
/* a program to check if the driver is capable of having insurance under the conditions ir not.*/
{
	int age,mar,gender;
	printf("enter 0 for the married and 1 for unmarried:");
	scanf("%d",&mar);
	printf("enter the age of the driver:");
	scanf("%d",&age);
	printf("enter 0 for the male and 1 for the female:");
	scanf("%d",&gender);
	if(mar==0)
	{
		printf("the driver is insured\n");
	}
	else if (mar==1 && gender==0 && age>30)
	{
		printf("the driver is insured\n");
	}
	else if (mar==1 && gender==1 && age>25)
	{
		printf("the driver is insured\n");
	}
	else
	{
		printf("the driver is not insured\n");
	}
	return 0;
}
