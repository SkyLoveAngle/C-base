#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//非递归实现阶乘
/*
int main()
{
	int n = 1;
	printf("请输入数字n:");
	scanf("%d", &n);
	int ret = 1;
	for (ret = 1; n > 1; n--)
	{
		ret = ret*n;
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}
*/

//用递归实现阶乘
int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n* factorial(n - 1);
}

int main(){
	int n = 1;
	printf("请输入n:");
	scanf("%d", &n);
	printf("阶乘为：%d", factorial(n));
	system("pause");
	return 0;
}