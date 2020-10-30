#define use_CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//实现一个函数来交换两个整数的内容
void swap(int* x,int* y) {
	int tmp = 1;
		tmp = *x;
		*x = *y;
		*y = tmp;
	printf("x=%d,y=%d",*x,*y);
}
int main() {
	int x = 1;
	int y = 1;
	printf("请输入两个数字");
	scanf("%d %d",&x,&y);
	//swap(x, y);
	swap(&x, &y);

	system("pause");
	return 0;
}