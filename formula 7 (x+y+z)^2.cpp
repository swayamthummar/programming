#include<stdio.h>
main()
{
	int a,b,c,d;//x=a,y=b,z=c
	printf("Enter a value for a & b= ");
	scanf("%d%d",&a,&b);
	printf("Enter a value for c = ");
	scanf("%d",&c);
    d=(a*2+b*2)+(c*2+2*a*b)+(2*b*c+2*a*c);
	printf("The sum of a , b & c = %d",d);
}
