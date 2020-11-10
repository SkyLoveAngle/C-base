#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*
编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子:1999 2299。输出例子:7。
*/
int fun(int m,int n) {
	int count = 0;
	int value = m^n;
	while (value != 0)
	{
		if ((value & 1) == 1)
		{
			count++;
		}
		value = value >> 1;
	}
	return count;
}
int main() {
	int m = 1;
	int n = 1;
	printf("请输入两位整数：");
	scanf("%d %d", &m, &n);
	int count =fun(m, n);
	printf("这两位数的二进制共有%d位不同！", count);
	system("pause");
	return 0;
}