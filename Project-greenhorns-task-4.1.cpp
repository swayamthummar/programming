#include<stdio.h>
main()
{
	int BS,HRA,DA,TA,ANS;
	printf("Enter Base Salary->");
	scanf("%d",&BS);
	printf("Enter HRA percent->");
	scanf("%d",&HRA);
	printf("Enter DA percent ->");
	scanf("%d",&DA);
	printf("Enter TA percent->");
	scanf("%d",&TA);
	
	HRA=BS*HRA/100;
	DA=BS*DA/100;
	TA=BS*TA/100;
	ANS=BS+HRA+DA+TA;
	
	printf("                              \n");
    printf("Your answer is-> %d",ANS);
}
