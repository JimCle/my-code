#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void �˵�()
{
	printf("##############################################\n");
	printf("###########   1.һ�����氡~   ################\n");
	printf("###########   0.����͹��ɣ�  ################\n");
	printf("##############################################\n");

}
void ��Ϸ()
{
	int �µ��� = 0;
	int ����� = rand()%100+1;
	//printf("%d\n", �����);

	while (1)
	{
	
		scanf("%d", &�µ���);
		if (�µ��� < �����)
		{
			printf("��С�ˣ���ò�Ŷ\n");
		}
		else if (�µ��� > �����)
		{
			printf("�������´��ˣ�\n");
		}
		else
		{
			printf("��Ȼ�¶��ˣ�������ţ���ϣ�\n");
			break;
		}
	}
}
int main()//��������Ϸ����Χ��0~100
{
	int ѡ�� = 0;
	srand((unsigned int)time(NULL));

	do
	{
		�˵�();
		printf("���ѡ�񣡱������ĥĥ���ģ�\n");
		scanf("%d",&ѡ��);
	

		switch (ѡ��)
		{
		case 1:
			printf("�¸�����\n");

			��Ϸ();
			break;
		case 0:
			break;
		default:
			printf("����~��ô��ô��Ƥ~����ѡ����~\n");
		

			break;

		}
	} while (ѡ��);
	printf("��Ϸ����\n");
	return 0;
}