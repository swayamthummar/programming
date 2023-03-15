#include<stdio.h>
main()
{
	int BS=100,HRA=10,DA=5,TA=8,ANS;

	HRA=BS*HRA/100;
	DA=BS*DA/100;
	TA=BS*TA/100;
	ANS=BS+HRA+DA+TA;
	
	printf("Your HRA is-> %d\n",HRA);
	printf("Your DA is-> %d\n",DA);
	printf("Your TA is-> %d\n",TA);
    printf("Your answer is->%d",ANS);
}
