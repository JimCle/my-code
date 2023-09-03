#define _CRT_SECURE_NO_WARNINGS   1

#include<stdio.h>

int is_prime(int number)
{
	if (number <= 1)
	{

		return 0;
	}
	for (int a = 2;a * a <= number;a++) {
		if (number % a == 0)
		{
			return 0;
		}
		
	}
	return 1;
}

int main()
{
	int number;

	printf("请输入一个整数");
	scanf("%d", &number);

	if (is_prime(number))
	{
		printf("%d 是素数\n", number);

	}
	else
	{
		printf("%d 不是素数\n", number);

	}
	return 0;
}