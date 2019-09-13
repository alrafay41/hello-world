#include<stdio.h>
#include<stdlib.h>
int main()
{
	/* to swap two numbers without using third variable*/
		/*Name: Abdul Rafay      Registeration # SP19_BCS_014- Section:B */
    int a,b;
    printf("enter two numbers: " );
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping %d %d\n",a,b);  
    return 0;
   
}
