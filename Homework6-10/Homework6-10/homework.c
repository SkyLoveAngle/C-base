#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
����һ���������飬��ɶ�����Ĳ���
1.ʵ�ֺ���init()��ʼ������Ϊȫ0��
2.ʵ��print()��ӡ�����ÿ��Ԫ�ء�
3.ʵ��reverse()�����������Ԫ�ص����á�
Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
*/

void init(int arr[],int n) {
	for (int i = 0; i < n; i++){
		arr[i] = 0;
	}
	printf("1.�������ʼ��ȫΪ0���ӡ���:\n");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void print(int arr[],int n) {
	printf("2.����ÿ��Ԫ�����δ�ӡ���:\n");
	for (int i = 0; i < 10;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int n)
{
	int tmp;
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	printf("3.�����ú�������ӡ���:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		printf(" ");
	}
	printf("\n");
}


int main() {
	int arr[10];
	printf("������10������:");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	int n = sizeof(arr) / sizeof(arr[0]);
	init(arr, n);
	print(arr, n);
	reverse(arr, n);
	system("pause");
	return 0;
}