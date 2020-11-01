# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//用非递归分别实现字符长度计算,并依次输出字符元素.
/*
int strLen(char str[]) {
	int count = 0;
	for (int i = 0; str[i] != '\0';i++) {
		count++;
	}
	return count;
}
*/

//用非递归分别实现字符长度计算,并依次输出字符元素

int strLen(char str[]) {
	if (str[0] == '\0') {
		return 0;
	}
	return 1 + strLen(str + 1);
}

int main() {
	char str[]="hehehe";
	printf("请输入你要输入的字符串:");
	for (int i = 1; i <= 10; i++) 
	{
		scanf("%s",&str[10]);
	}
	int ret = strLen(str);
	printf("字符长度ret=%d\n",ret);
	for (int i = 1; i < 10; i++)
	{
		printf("字符顺序依次为:%s\n", str[i]);
	}
	system("pause");
	return 0;
}