#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int add(int x, int y)//函数练习
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	printf("请输入两个要相加的数\n");

	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	
	int sum = add(num1, num2);
	printf("%d\n", sum);
	return 0;
}