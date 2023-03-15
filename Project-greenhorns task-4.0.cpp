#include<stdio.h>
main()
{
	int BS,HRA,DA,TA,ANS;
	printf("Enter Base Salary->");
	scanf("%d",&BS);
	printf("Enter HRA->");
	scanf("%d",&HRA);
	printf("Enter DA->");
	scanf("%d",&DA);
	printf("Enter TA->");
	scanf("%d",&TA);
//	HRA=BS*HRA/100;
//	DA=BS*DA/100;
//	TA=BS*TA/100;
	ANS=BS+HRA+DA+TA;
	
	printf("Your answer is-> %d",ANS);
}
