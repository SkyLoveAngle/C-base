#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*
写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
输入：1729，输出：19
*/
int DitgitSum(int n) {
	int sum = 0;
	int m = 0;
	int z = 0;
	if (n!=0) {
		m = n % 10;
		z = n / 10;
		sum = m + DitgitSum(z);
	}
	return sum;
}
int main() {
	int num = 1;
	printf("请输入一个非负整数:");
	scanf("%d", &num);
	int sum = DitgitSum(num);
	printf("数字的和是:%d", sum);
	system("pause");
	return 0;
}