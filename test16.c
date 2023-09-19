#define _CRT_SECURE_NO_WARNINGS   1

#include<stdio.h>
int main()
{
	int n = 1;
	int m = 1;
	int i = 1;

	scanf("%d", &n);
	for (m = 1;m <=n;m++)//计算n!
	{
	
		i*= m;
	}
	printf("%d", i);
	return 0;
}