#include<stdio.h>
/*
写一个函数打印arr数组的内容，不使用数组下标，使用指针。
arr是一个整形一维数组。
*/
void PrintArr(int arr[]) {
	int i = 0;
	int* p = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));//指针
	}
}
int main() {
	int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
	PrintArr(arr);
	system("pause");
	return 0;
}