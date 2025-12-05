#include<stdio.h>
int main()
{
	char operator;
	int num1,num2;
	printf("enter the expression(e.g,2+3):");
	scanf(" %d %c %d",&num1,&operator,&num2);
	switch(operator)
	{
		case '+':
			printf("result:%d\n",num1+num2);
			break:
		case '-':
			printf("result:%d\n",num1-num2);
			break;
		case '*':
			printf("result:%d\n",num1* num2);
			break;
		case '/':
			if (num2!=0)
			printf(" result:%2\n",(float)num1/num2);
			else
			printf(" division by zero error!\n");
			break;
		default:
			printf("invalid operator\n");
			
	}
	return 0;
}
