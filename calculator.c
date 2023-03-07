#include <stdio.h>

int main(void) 
{
	double num1, num2, ans;
	char operator;

	printf("Enter the first number: ");
	scanf("%lf", &num1);

	printf("Enter the second number: ");
	scanf("%lf", &num2);

	printf("What will you like to do;\nEnter:\n+ for Sum\n- for Difference\n* for Product\n/ for Quotient\n: ");
	scanf("%s", &operator);

	switch (operator)
	{
	case '+':
		ans = num1 + num2;
		printf("%lf + %lf = %.3lf", num1, num2, ans);
		break;

	case '-':
		ans = num1 - num2;
		printf("%lf - %lf = %.3lf", num1, num2, ans);
		break;

	case '*':
		ans = num1 * num2;
		printf("%lf * %lf = %.3lf", num1, num2, ans);
		break;
	case '/':
		ans = num1 / num2;
		printf("%lf / %lf = %.3lf", num1, num2, ans);
		break;
	
	default:
		printf("Invalid request");
		break;
	}


    return 0;
}
