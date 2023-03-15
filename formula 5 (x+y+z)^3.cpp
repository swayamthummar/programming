#include<stdio.h>
main()
{
	int a,b,c,d;//x=a,y=b,z=c
	printf("Enter a value for a & b= ");
	scanf("%d%d",&a,&b);
	printf("Enter a value for c = ");
	scanf("%d",&c);
    d=(a+b)*3+c*3+3*(a+b)*c*(a+b+c);
	printf("The sum of a , b & c = %d",d);
}









