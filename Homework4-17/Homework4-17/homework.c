#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�õݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
void PrintInt(int a) {
	if (a>10) {
		PrintInt(a/10);
	}
	printf("%d\n",(a%10));
}

int main() {
	int a = 0;
	printf("��������Ҫ��ӡ������:");
	scanf("%d",&a);
	PrintInt(a);
	system("pause");
	return 0;
}