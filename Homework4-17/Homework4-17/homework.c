#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//用递归方式实现打印一个整数的每一位
void PrintInt(int a) {
	if (a>10) {
		PrintInt(a/10);
	}
	printf("%d\n",(a%10));
}

int main() {
	int a = 0;
	printf("请输入你要打印的数字:");
	scanf("%d",&a);
	PrintInt(a);
	system("pause");
	return 0;
}