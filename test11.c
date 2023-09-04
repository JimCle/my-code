#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>

int big(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	printf("请输入两个不相等的整数");
	int a, b;
	scanf("%d %d", &a, &b);

	int final = big(a, b);
	printf("%d 是较大值", final);
}