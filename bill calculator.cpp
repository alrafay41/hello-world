#include<stdio.h>
int main()
/* to calculate the electricity bill along with the surcharge on it on different number of units*/
{
	int units;
	float total_bill,surcharge;
	printf("enter the number of units:");
	scanf("%d",&units);
	if(units<=300 && units>0)
	{
	units=units*3;
    surcharge=units*(5/100);
    total_bill=units+surcharge;
    printf("total bill after adding the surcharge will be:%f",total_bill);
}
else if (units>300)
{
	units=units*3.5;
    surcharge=units*(5/100);
    total_bill=units+surcharge;
    printf("total bill after adding the surcharge will be:%f",total_bill);
    
}
else
{
printf("enter a valid number\n");
}
return 0;


	}

