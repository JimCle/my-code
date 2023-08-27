#include<stdio.h>

int main()
{
	int word = 0;
	while (word < 433)
	{
		word = word + 1;
		printf("继续背单词:%d\n",word);
	}
	if (word == 433)
	{
		printf("四级考过稳稳的\n");
	}
	return 0;
}