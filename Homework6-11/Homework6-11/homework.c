#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*
������A�е����ݺ�����B�е����ݽ��н���������һ����
*/
int main()
{
	int i;
	int A[10];
	int B[10];
	int tmp[10];
	printf("����������A��");
	for (i = 0; i<10; i++){
		scanf(" %d", &A[i]);
	}
	printf("����������B��");
	for (i = 0; i<10; i++){
		scanf(" %d", &B[i]);
	}
	for (i = 0; i<10; i++){
		tmp[i] = A[i];
		A[i] = B[i];
		B[i] = tmp[i];
	}
	printf("�仯���A����:");
	for (i = 0; i<10; i++){
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("�仯���B����:");
	for (i = 0; i<10; i++){
		printf("%d ", B[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}