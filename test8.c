﻿#include<stdio.h>

int main()
{
	int sum = 0;
	for (int a = 1; a <= 100;a++) {
		sum += a;
	}
	printf("1+2+3+...+100=%d", sum);
	return 0;
}