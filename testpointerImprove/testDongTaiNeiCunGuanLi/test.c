#include<stdio.h>
#include<stdlib.h>

int main() {

//	char a = 'a';
//	char* p1 = &a;
//	char arr[100] = "Hello Word!";
//	char* p2 = arr; 




	char str1[] = "Hello World!";
	char str2[] = "Hello World!";
	char *str3 = "Hello World!";
	char *str4 = "Hello World!";
	if (str1 == str2)//�˴�������ת����ָ����ʽ
		printf("str1 and str2 ��ȣ�\n");
	else
		printf("str1 and str2 ����ȣ�\n");
	if (str3 == str4)
		printf("str3 and str4 ��ȣ�\n");
	else
		printf("str3 and str4 ����ȣ�\n");


	system("pause");
	return 0;
}