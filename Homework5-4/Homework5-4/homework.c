/*
��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int power(int n,int k) {
	int sum = 1;
	if (n == 0) {
		printf("0����ָ��������!");
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
	printf("����������n�Լ���k:");
	scanf("%d","%d", &a,&b);
	int m = power(a,b);
	printf("%d��%d�η��Ľ��Ϊ%d",a, b, m);
	system("pause");
	return 0;
}