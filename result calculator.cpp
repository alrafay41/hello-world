#include<iostream>
int main()
/* a program to calculate the result of a student according to the marks input by the user*/
{
	int a,b,c,d,e,sum,per;
	printf("enter the marks of the subjects out of 100:\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a>=0 && b>=0 && c>=0 && d>=0 && e>=0)
{
	sum=a+b+c+d+e;
	per=sum/5;
}
else
{
	printf("enter the valid subject numbers\n");
}

	if(per>=90)
	{
		printf("you got an A grade with 4.0 points");
	}
	else if(per>=85 && per<=89)
	{
		printf("you got an A- grade with 3.7 points");
	}
	else if(per>=80 && per<=84)
	{
		printf("you got a B+ grade with 3.3 points");
	}
	else if(per>=75 && per<=79)
	{
		printf("you got a B grade with 3.0 points");
	}
	else if(per>=70 && per<=74)
	{
		printf("you got a B- grade with 2.7 points");
	}
	else if(per>=65 && per<=69)
	{
		printf("you got a C+ grade with 2.3 points");
	}
	else if(per>=60 && per<=64)
	{
		printf("you got a C grade with 2.0 points");
	}
	else if(per>=55 && per<=59)
	{
		printf("you got an C- grade with 1.7 points");
	}
	else if(per>=50 && per<=54)
	{
		printf("you got a D grade with 1.3 points");
	}
	else if(per<50 && per>0)
	{
		printf("you got a F grade with 0.0 points");
	}
	return 0;
}
