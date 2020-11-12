#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*
写一个函数返回参数二进制中 1 的个数。
比如： 15    0000 1111    4 个 1
*/
int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value != 0)
	{
		if ((value % 2) == 1)
		{
			count++;
		}
		value /= 2;;
	}
	return count;
}
int main()
{
	unsigned int num = 0;
	int count = 0;
	printf("请输入一个正整数：");
	scanf("%d", &num);
	count = count_one_bits(num);
	printf("该数二进制中“1”的个数为：%d\n", count);
	system("pause");
	return 0;
}

