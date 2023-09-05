#define _CRT_SECURE_NO_WARNINGS   1

#include<stdio.h>
int main()
{
	int x ;
	scanf("%d", &x);
	if (x % 2 == 0)//判断一个数是否为奇数
		printf("不是奇数\n");
	else
		printf("是奇数\n");
	return 0;
}