#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define CHANGE(num) ((((num) & 0xaaaaaaaa) >> 1) | (((num)& 0x55555555) << 1))  

int main()
{
	int num = 0;
	printf("请输入：");
	scanf("%d", &num);
	printf("输出结果：%d\n", CHANGE(num));
	system("pause");
	return 0;
}