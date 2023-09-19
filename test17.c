#define _CRT_SECURE_NO_WARNINGS   1

#include<stdio.h>
int main()
{
	int n = 10;
	int m = 1;
	int i = 1;
	int b = 0;
	for (m = 1;m <=n;m++)//计算1!+2!+3!+...+10！
	{
	    i*= m;		
		b += i;

	}
	printf("%d", b);
	return 0;
}