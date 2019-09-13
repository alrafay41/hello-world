#include<stdio.h>
int main()
{
	/* to calculate the area of triangle by using printf statement*/
	/*Name: Abdul Rafay      Registeration # SP19_BCS_014- Section:B */
    float l,w,h,area,perimeter;
    printf("enter the length of triangle: ");
    scanf("%f",&l);
    printf("enter the width of triangle: ");
    scanf("%f",&w);
    printf("enter the height: ");
    scanf("%f",&h);
    area=0.5*l*w;
    printf("the area of triangle is: %f \n", area);
    perimeter=l+w+h;
    printf("the parimeter of triangle: %f ",perimeter);
    return 0;

}
