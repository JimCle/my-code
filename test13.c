#define _CRT_SECURE_NO_WARNINGS   1

#include<stdio.h>
int muu(int M)
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