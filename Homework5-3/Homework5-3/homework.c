#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*
дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
���룺1729�������19
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
	printf("������һ���Ǹ�����:");
	scanf("%d", &num);
	int sum = DitgitSum(num);
	printf("���ֵĺ���:%d", sum);
	system("pause");
	return 0;
}