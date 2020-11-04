#include <stdio.h>

int main()
{
	char op;
	float num1, num2, result;

	printf("\n Please Enter an Operator (+, -, *, /)  :  ");
  	scanf("%c", &op);

	printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
  	scanf("%f%f", &num1, &num2);

  	if(op == '+')
  	{
  		printf("\n The result of %.2f + %.2f  = %.2f", num1, num2, num1 + num2);
  	}
  	else if(op == '-')
  	{
  		printf("\n The result of %.2f - %.2f  = %.2f", num1, num2, num1 - num2);
  	}
  	else if(op == '*')
  	{
  		printf("\n The result of %.2f * %.2f  = %.2f", num1, num2, num1 * num2);
  	}
  	else if(op == '/')
  	{
  		printf("\n The result of %.2f / %.2f  = %.2f", num1, num2, num1 / num2);
  	}
  	else
  	{
  		printf("\n You have enetered an Invalid Operator ");
	}

  	return 0;
}
