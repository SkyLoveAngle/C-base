#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
例如：2+22+222+2222+22222
*/
int main() {
	int n;
	int i;
	int sum = 0;
	scanf("%d", &n);
	int tmp = n;//临时变量保存输入的数字
	for (i = 0; i < 5; i++) {
		sum = sum + n;//进行前五项的累加
		n = n * 10 + tmp;//进行*10+本身操作,必须用一个临时变量来保存输入的数字
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
