#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<Windows.h>
/*
����������ʱ�����������������������ݡ�
*/
void swapint1(int a, int b) {
	a = a^b;
	b = a^b;
	a = a^b;
	printf("����swapint1����������Ϊ��%d,%d\n", a, b);
}
void swapint2(int a, int b) {
	a = a + b;
	b = a - b;
	a = a - b;
	printf("����swapint2����������Ϊ��%d,%d\n", a, b);
}
int main() {
	int x = 0, y = 0;
	printf("��������������");
	scanf("%d %d", &x, &y);
	printf("����ǰ������Ϊ��%d,%d\n", x, y);
	swapint1(x, y);
	swapint2(x, y);
	system("pause");
	return 0;
}
