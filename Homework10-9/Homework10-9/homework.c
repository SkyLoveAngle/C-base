#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//��ӡ���������
int main() {
	int i = 0;
	int j = 0;
	int n = 0;
	int arr[100][100];
	printf("����������n:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			arr[i][0] = 1;
			if (i == j)
				arr[i][j] = 1;
		}
	}
	for (i = 2; i < n; i++)
	{
		for (j = 1; j < i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}