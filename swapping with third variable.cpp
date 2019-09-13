#include<stdio.h>
int main()
{
	/*to swap two numbers using third variable*/
		/*Name: Abdul Rafay      Registeration # SP19_BCS_014- Section:B */
    int a,b,c;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("after swapping %d %d\n",a,b);
    return 0;
}


