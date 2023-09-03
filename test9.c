#include<stdio.h>

struct stupid
{
	char name[23];
	int age;
	double height;
	double weight;
};

struct stupid a = { "李婷",20,1.64,54.8 };

int main()
{   
	printf("stupid成员资料\n");
	printf("姓名:%s\n 年龄:%d\n 身高:（m）%lf\n 体重:（kg)%lf\n",a.name,a.age,a.height,a.weight);

	return 0;
}