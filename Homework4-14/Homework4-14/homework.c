//�ú���ʵ���ж�һ���ǲ�������
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int isLeapyear(int year) {
	if ( (year%400==0) || (year%100!=0 && year%4==0)) {
		return 1;
	}else {
			return 0;
		}
		
	}
int main() {
	int year = 1;
	printf("��������Ҫ���ҵ����:");
	scanf("%d", &year);
	if (isLeapyear(year) == 1) {
		printf("%d��������!\n",year);
	}
	else {
		printf("%d�겻������!\n", year);
	}
		system("pause");
	return 0;
}