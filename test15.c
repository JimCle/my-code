#define _CRT_SECURE_NO_WARNINGS   1

#include<stdio.h>
int main()
{
	int x=1;
	for (x >= 1;x < 100;x += 2)//写出0~100之间的奇数
	{
		printf("%d\n", x);
	}

	
	return 0;
}