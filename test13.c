#define _CRT_SECURE_NO_WARNINGS   1

#include<stdio.h>
int muu(int M)//用于判断一个整数（>=1,<=1000000)是否能被5整除
{
	if (M % 5 == 0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
int main()
{
	printf("请输入一个>=1,<=1000000的整数\n");
	int M;
	scanf("%d", &M);
	int result=muu(M);
	printf("%s\n", result);
	return 0;
}
