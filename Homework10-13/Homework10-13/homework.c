#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*
ʵ��һ�����������������ַ����е�k���ַ���
���磺ABCD����һ���ַ��õ�BCDA; ABCD���������ַ��õ�CDAB
*/

void Rotate(char* s, int k) {
	int len = strlen(s);
	char* p;
	char* q;
	for (p = s + k - 1; p >= s; --p) {
		for (q = p; q < p + len - k; ++q) {
			char tmp = *q;
			*q = *(q + 1);
			*(q + 1) = tmp;
		}
	}
}

int main() {
		char string[30];
		scanf("%s", string);
		int k = 0;
		printf("��������Ҫ��ת���ַ�����:");
		scanf("%d", &k);
		if (k > (int)strlen(string)) {
			printf("��������\n");
		}
		Rotate(string, k);
		printf("%s\n", string);
		system("pause");
		return 0;
	}




	
