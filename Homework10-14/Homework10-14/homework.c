#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

// 只需要把原字符串来两遍, 包括了左旋和右旋的所有可能性 7次会到原字符串
// 再看一下待查字符串是不是它的字符串(来两遍后的字符串里面的)
// 如果是 找到了 则strstr返回值 绝不是空NULL

int strRoundStr(char* src, char* find) {
	char tmp[256] = { 0 };
	// 使src在tmp 里来两遍
	strcpy(tmp, src);
	strcat(tmp, src);
	// 如果返回值不是空 返回1 代表找到了
	// 如果返回值为0, 则没找到
	return strstr(tmp, find) != NULL;
}

int main() {
	char src[] = "ABCDEFG";
	char find[] = "GA";// 算左旋一个之后的结果
	printf("%d\n", strRoundStr(src, find));// 找到了
	char find1[] = "GAa";
	printf("%d\n", strRoundStr(src, find1));// 没找到
	system("pause");
	return 0;
}
