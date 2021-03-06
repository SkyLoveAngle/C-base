#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*
实现一个函数，可以左旋字符串中的k个字符。
例如：ABCD左旋一个字符得到BCDA; ABCD左旋两个字符得到CDAB
*/

void Rotate(char* s, int k) {
	int len = strlen(s);
	char* p;
	char* q;
	for (p = s + k - 1; p >= s; --p) {
		for (q = p; q < p + len - k; ++q) {
			char tmp = *q;
			*q = *(q + 1);
			*(q + 1) = tmp;
		}
	}
}

int main() {
		char string[30];
		scanf("%s", string);
		int k = 0;
		printf("请输入你要旋转的字符个数:");
		scanf("%d", &k);
		if (k > (int)strlen(string)) {
			printf("输入有误\n");
		}
		Rotate(string, k);
		printf("%s\n", string);
		system("pause");
		return 0;
	}




	
