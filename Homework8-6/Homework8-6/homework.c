#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*
���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
��������:1999 2299���������:7��
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
	printf("��������λ������");
	scanf("%d %d", &m, &n);
	int count =fun(m, n);
	printf("����λ���Ķ����ƹ���%dλ��ͬ��", count);
	system("pause");
	return 0;
}