#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
创建一个整形数组，完成对数组的操作
1.实现函数init()初始化数组为全0。
2.实现print()打印数组的每个元素。
3.实现reverse()函数完成数组元素的逆置。
要求：自己设计以上函数的参数，返回值。
*/

void init(int arr[],int n) {
	for (int i = 0; i < n; i++){
		arr[i] = 0;
	}
	printf("1.将数组初始化全为0后打印输出:\n");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void print(int arr[],int n) {
	printf("2.数组每个元素依次打印输出:\n");
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
	printf("3.将逆置后的数组打印输出:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		printf(" ");
	}
	printf("\n");
}


int main() {
	int arr[10];
	printf("请输入10个整数:");
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