#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void 菜单()
{
	printf("##############################################\n");
	printf("###########   1.一起来玩啊~   ################\n");
	printf("###########   0.不玩就滚吧！  ################\n");
	printf("##############################################\n");

}
void 游戏()
{
	int 猜的数 = 0;
	int 随机数 = rand()%100+1;
	//printf("%d\n", 随机数);

	while (1)
	{
	
		scanf("%d", &猜的数);
		if (猜的数 < 随机数)
		{
			printf("猜小了，你好菜哦\n");
		}
		else if (猜的数 > 随机数)
		{
			printf("弱鸡！猜大了！\n");
		}
		else
		{
			printf("居然猜对了？！把你牛的嘞！\n");
			break;
		}
	}
}
int main()//猜数字游戏，范围在0~100
{
	int 选择 = 0;
	srand((unsigned int)time(NULL));

	do
	{
		菜单();
		printf("快点选择！别给老子磨磨蹭蹭的！\n");
		scanf("%d",&选择);
	

		switch (选择)
		{
		case 1:
			printf("猜个数吧\n");

			游戏();
			break;
		case 0:
			break;
		default:
			printf("讨厌~怎么那么调皮~重新选了啦~\n");
		

			break;

		}
	} while (选择);
	printf("游戏结束\n");
	return 0;
}