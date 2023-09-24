#define _CRT_SECURE_NO_WARNINGS   1

#include<stdio.h>
//在一个有序数组查找一个数，采用二分查找（折半查找）
int main()
{
	int arr[] = { 2,3,4,5,6,7,8,9,10,11,12,13,14};
	int l = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int r = sz-1;
	int k = 15;
	do
	{
		int m = (l + r) / 2;
		if (arr[m] < k)
		{
			l = m + 1;
		}
		else if (arr[m] > k)
		{
			r = m - 1;
		}
		else
		{
			printf("找到了,下标是：%d\n", m);
			break;
		}
	} 
	while (r >= l);
	if (r <l)
	{
		printf("找不到");
	}
	return 0;
}