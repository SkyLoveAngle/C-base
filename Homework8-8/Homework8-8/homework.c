#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*
дһ���������ز����������� 1 �ĸ�����
���磺 15    0000 1111    4 �� 1
*/
int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value != 0)
	{
		if ((value % 2) == 1)
		{
			count++;
		}
		value /= 2;;
	}
	return count;
}
int main()
{
	unsigned int num = 0;
	int count = 0;
	printf("������һ����������");
	scanf("%d", &num);
	count = count_one_bits(num);
	printf("�����������С�1���ĸ���Ϊ��%d\n", count);
	system("pause");
	return 0;
}

