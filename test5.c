#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int input = 0;
	printf("�ϴ�ѧһ�ж��ؿ���\n");
	printf("��ú�ѧ֪ʶ��\n");
	scanf("%d", &input);

	if (input == 5)//ѡ�����
	    printf("���гɹ�\n");
	else
		printf("�����Լ���\n");
    
	return 0;
}