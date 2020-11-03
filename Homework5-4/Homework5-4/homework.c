/*
编写一个函数实现n的k次方，使用递归实现。
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int power(int n,int k) {
	int sum = 1;
	if (n == 0) {
		printf("0的幂指数无意义!");
	}else{
		if (k == 0) {
			sum = 1;
		}
		else {
			sum = n*power(n, k - 1);
		}
	}
	return sum;
}
int main() {
	int a = 1;
	int b = 1;
	printf("请输入数字n以及幂k:");
	scanf("%d","%d", &a,&b);
	int m = power(a,b);
	printf("%d的%d次方的结果为%d",a, b, m);
	system("pause");
	return 0;
}