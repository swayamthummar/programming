#include<stdio.h>
main()
{
	float BS,HRA,DA,TA,ANS;
	printf("Enter Base Salary->");
	scanf("%f",&BS);
	printf("Enter HRA percent->");
	scanf("%f",&HRA);
	printf("Enter DA percent ->");
	scanf("%f",&DA);
	printf("Enter TA percent->");
	scanf("%f",&TA);
	
	HRA=BS*HRA/100;
	DA=BS*DA/100;
	TA=BS*TA/100;
	ANS=BS+HRA+DA+TA;
	
	printf("                              \n");
	printf("Your HRA is-> %.2f\n",HRA);
	printf("Your DA is-> %.2f\n",DA);
	printf("Your TA is-> %.2f\n",TA);
    printf("Your answer is-> %.2f",ANS);
}
