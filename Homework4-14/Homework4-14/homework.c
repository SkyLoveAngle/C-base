//用函数实现判断一年是不是闰年
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
	printf("请输入你要查找的年份:");
	scanf("%d", &year);
	if (isLeapyear(year) == 1) {
		printf("%d年是闰年!\n",year);
	}
	else {
		printf("%d年不是闰年!\n", year);
	}
		system("pause");
	return 0;
}