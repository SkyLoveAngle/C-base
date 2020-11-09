#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*
将数组A中的内容和数组B中的内容进行交换（数组一样大）
*/
int main()
{
	int i;
	int A[10];
	int B[10];
	int tmp[10];
	printf("请输入数组A：");
	for (i = 0; i<10; i++){
		scanf(" %d", &A[i]);
	}
	printf("请输入数组B：");
	for (i = 0; i<10; i++){
		scanf(" %d", &B[i]);
	}
	for (i = 0; i<10; i++){
		tmp[i] = A[i];
		A[i] = B[i];
		B[i] = tmp[i];
	}
	printf("变化后的A数组:");
	for (i = 0; i<10; i++){
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("变化后的B数组:");
	for (i = 0; i<10; i++){
		printf("%d ", B[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}