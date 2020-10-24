#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

/*
int main() {
	//暴力穷举法
	int a = 0;
	int b = 0;
	printf("请输入两个数:");
	scanf("%d %d",&a,&b);
	if (a>=b) {
		int i = 0;
		for (i = b; i >= 1; i--) {
			if (a%i == 0 && b%i == 0) {
				printf("最大公约数为:%d\n",i);
				break;
			}
		}
	}
	else{
		int j = 0;
		for (j = a; j >= 1; j--) {
			if (a%j == 0 && b%j == 0) {
				printf("最大公约数为:%d\n", j);
				break;
			}
		}
	}


	system("pause");
	return 0;
}
*/

int main() {
	//辗转相除法
	int a = 0;
	int b = 0;
	printf("请输入两个数字:");
	scanf("%d %d",&a,&b);
	if (a >= b) {
		int c = a%b;
		if (c!=0) {
			a = b;
			b = c;
			c= a%b;
		}
		printf("最大公约数为:%d\n",b);
	}
		else {
			int d = b%a;
			if (d != 0) {
				b = a;
				a = d;
				d = b%a;
			}
			printf("最大公约数为:%d\n", a);
		}
	system("pause");
	return 0;
	
}