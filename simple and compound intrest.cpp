#include<stdio.h>
#include<math.h>
int main()
{
	float principal,rate,time;
	float simple_intrest,compound_intrest,amount;
	printf("enter principal amount");
	scanf("%f",&principal);
	printf("enter rate of intrest");
	scanf("%f",&rate);
	printf("enter time");
	scanf("%f",&time);
	simple_intrest =(principal *rate*time)/100;
	amount=principal*pow((1+rate/100),time);
	compound_intrest =amount -principal;
	printf("\nsimple intrest =%.2f",simple_intrest);
	printf("\ncompound intrest =%.2f",compound_intrest);
	return 0;
}

