#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
void Mult(int n) {
	int row = 1;
	int line = 1;
	for (row = 1; row <= n;row++) {
		for (line = 1; line <= row;line++) {
			printf("%d*%d=%d\t", row,line,row*line);
		}
		printf("\n");
	}	
}


int main() {
	int n = 1;
	printf("请输入你要需要的乘法口诀范围:");
	scanf("%d",&n);
	Mult(n);
	system("pause");
	return 0;
}