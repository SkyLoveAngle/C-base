#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<Windows.h>
/*
不允许创建临时变量，交换两个整数的内容。
*/
void swapint1(int a, int b) {
	a = a^b;
	b = a^b;
	a = a^b;
	printf("经过swapint1函数处理后变为：%d,%d\n", a, b);
}
void swapint2(int a, int b) {
	a = a + b;
	b = a - b;
	a = a - b;
	printf("经过swapint2函数处理后变为：%d,%d\n", a, b);
}
int main() {
	int x = 0, y = 0;
	printf("请输入两个数：");
	scanf("%d %d", &x, &y);
	printf("交换前的数字为：%d,%d\n", x, y);
	swapint1(x, y);
	swapint2(x, y);
	system("pause");
	return 0;
}
