#include<stdio.h>
#include<stdlib.h>
//实现一个对整形数组的冒泡排序
void bubbleSort(int arr[],int len) {
	int tmp = 1;
	for (int i = 0; i < len - 1;i++) {
		for (int j = 0; j < len - 1 - i;j++) {
			if (arr[j]<arr[j+1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main() {
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int len = sizeof(arr) / sizeof(int);
	bubbleSort(arr, len);
	for (int i = 0; i < len;i++) {
		printf("%d",arr[i]);
	}
	printf("%n");
	system("pause");
	return 0;
}