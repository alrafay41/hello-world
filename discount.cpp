#include<stdio.h>
int main()
/* a program to calculate the discount on number of items whose quantity is greater than 1000. price and quantity is given by the user*/
{
	int quantity,price,discount,total_expense;
	printf("enter the number of items:\n");
	scanf("%d",&quantity);
	printf("enter the price per item:\n");
	scanf("%d",&price);
	total_expense=quantity*price;
		
	if(quantity>=1000)
	{
		discount=total_expense*10/100;
		printf("your discount=%d\n",discount);
		total_expense=total_expense-discount;
		printf("your total expense=%d\n",total_expense);
	}
	else
	{
printf("your total expense=\n%d",total_expense);
}
	return 0;
}
