# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�÷ǵݹ�ֱ�ʵ���ַ����ȼ���,����������ַ�Ԫ��.
/*
int strLen(char str[]) {
	int count = 0;
	for (int i = 0; str[i] != '\0';i++) {
		count++;
	}
	return count;
}
*/

//�÷ǵݹ�ֱ�ʵ���ַ����ȼ���,����������ַ�Ԫ��

int strLen(char str[]) {
	if (str[0] == '\0') {
		return 0;
	}
	return 1 + strLen(str + 1);
}

int main() {
	char str[]="hehehe";
	printf("��������Ҫ������ַ���:");
	for (int i = 1; i <= 10; i++) 
	{
		scanf("%s",&str[10]);
	}
	int ret = strLen(str);
	printf("�ַ�����ret=%d\n",ret);
	for (int i = 1; i < 10; i++)
	{
		printf("�ַ�˳������Ϊ:%s\n", str[i]);
	}
	system("pause");
	return 0;
}