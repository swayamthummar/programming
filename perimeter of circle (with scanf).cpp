#include<stdio.h>
main()
{
	float pi=3.14,area;
	int r,h=2;
	printf("Enter a value for radious & height = ");
	scanf("%d",&r);
	area=pi*r*h;
	printf("perimeter of circle is = %.2f",area);
}

