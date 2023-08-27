#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int input = 0;
	printf("上大学一切都重开了\n");
	printf("会好好学知识吗？\n");
	scanf("%d", &input);

	if (input == 5)//选择语句
	    printf("考研成功\n");
	else
		printf("辜负自己了\n");
    
	return 0;
}