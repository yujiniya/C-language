#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double a(double x, double y, char op) {
	int end;
	double res = 0;
	if (op == '+')
		res = x + y;
	else if (op == '-')
		res = x - y;
	else if (op == '*')
		res = x * y;
	else if (op == '/')
		res = x / y;
	else if (op == '%')
		res = (int)x % (int)y;
	else
		printf("잘못 된 입력입니다. \n");

	return res;
}

int main()
{
	char op;
	double x, y;
	double result;

	printf("식을 입력하세요 (예 : x + y) \n");
	printf(" >> ");
	scanf("%lf %c %lf", &x, &op, &y);


	result = a(x, y, op);
	printf("%0.2lf %c %0.2lf = %0.2lf \n >> %0.2lf", x, op, y, result, result);

	while (1)
	{
		y = result;
		scanf(" %c" ,&op);
		if (op == 'e')
			break;
		scanf("%lf", &x);
		result = a(result, x, op);
		printf("%0.2lf %c %0.2lf =  %0.2lf \n >> %0.2lf", y, op, x, result, result);
	}
	
	return 0;
}