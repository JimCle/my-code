#define _CRT_SECURE_NO_WARNINGS   1

#include<stdio.h>
#include<string.h>
//模拟登录账号，输入密码，三次机会
int main()
{
	int a=0;
	char password[6] = { 0 };
	
	for (a = 0; a < 3; a++)
	{
		printf("请输入密码\n");
		scanf("%s", password);
		if (strcmp(password, "182076") == 0)
		{
			printf("成功登入\n");
			break;
		}
		else
			printf("密码错误，重新输入\n");
			

	}
	if (a == 3)
		printf("密码错误次数过多，将锁屏\n");

	return 0;
 }
