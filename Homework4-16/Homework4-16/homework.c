#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
void Mult(int n) {
	int row = 1;
	int line = 1;
	for (row = 1; row <= n;row++) {
		for (line = 1; line <= row;line++) {
			printf("%d*%d=%d\t", row,line,row*line);
		}
		printf("\n");
	}	
}


int main() {
	int n = 1;
	printf("��������Ҫ��Ҫ�ĳ˷��ھ���Χ:");
	scanf("%d",&n);
	Mult(n);
	system("pause");
	return 0;
}