#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*
��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ�����������С�
*/
int main() {
	int i = 0;
	int date = 0;
	int a[32] = { 0 };
	printf("������һ������");
	scanf("%d", &date);
	for (i = 0; i < 32; i++) {
		a[i] = date % 2;
		date /= 2;
	}
	printf("ż��λΪ:\n");
	for (i = 31; i >= 0; i -= 2) {
		printf("%d", a[i]);
	}
	printf("\n");
	printf("����λΪ:\n");
	for (i = 30; i >= 0; i -= 2) {
		printf("%d", a[i]);
	}
	printf("\n");
	system("pause");
		return 0;
}