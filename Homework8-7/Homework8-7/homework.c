#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*
获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列。
*/
int main() {
	int i = 0;
	int date = 0;
	int a[32] = { 0 };
	printf("请输入一个数：");
	scanf("%d", &date);
	for (i = 0; i < 32; i++) {
		a[i] = date % 2;
		date /= 2;
	}
	printf("偶数位为:\n");
	for (i = 31; i >= 0; i -= 2) {
		printf("%d", a[i]);
	}
	printf("\n");
	printf("奇数位为:\n");
	for (i = 30; i >= 0; i -= 2) {
		printf("%d", a[i]);
	}
	printf("\n");
	system("pause");
		return 0;
}