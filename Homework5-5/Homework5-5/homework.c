/*�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ݹ鷽��ʵ��쳲�������
/*
int fib(int n) {
	if (n<=2) {
		return 1;
	}
	else {
		return fib(n - 1) + fib(n - 2);
	}
}
int main() {
	int n = 1;
	printf("������һ����n����:");
	scanf("%d", &n);
	printf("��n��쳲�������Ϊ:%d\n", fib(n));
	system("pause");
	return 0;
}
*/

//�ǵݹ鷽��ʵ��쳲�������
#include <stdio.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	if (n <= 2)
		return 1;
	else
	{
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
		return c;
	}
}
int main()
{
	int n = 0;
	printf("������һ����n����:\n");
	scanf("%d", &n);
	printf("��n������쳲�������Ϊ��%d\n", fib(n));
	system("pause");
	return 0;
}