#define _CRT_SECURE_NO_WARNINGS   1

#include<stdio.h>
#include<string.h>
#include<windows.h>
//任务：张雅萌请原封不动地回来并穿裙子
int main()
{
	char arr1[] = "张雅萌请原封不动地回来并穿裙子";
	char arr2[] = "##############################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while(right>left)
	{arr2[left] = arr1[left];
	arr2[right] = arr1[right];
	left++;
	right--;

	printf("%s\n", arr2);
	Sleep(1000);
	system("cls");
	}
	printf("张雅萌请原封不动地回来并穿裙子");

	return 0;
}
//int main()
//{
//	char arr1[] = "张雅萌请原封不动地回来并穿裙子";
//	int str=strlen(arr1);
//	printf("%d\n", str);
//
//	return 0;
//}
