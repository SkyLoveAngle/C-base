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
	if (str1 == str2)//此处数组名转换成指针形式
		printf("str1 and str2 相等！\n");
	else
		printf("str1 and str2 不相等！\n");
	if (str3 == str4)
		printf("str3 and str4 相等！\n");
	else
		printf("str3 and str4 不相等！\n");


	system("pause");
	return 0;
}