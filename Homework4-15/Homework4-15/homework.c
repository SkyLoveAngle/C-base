#define use_CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//ʵ��һ��������������������������
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
	printf("��������������");
	scanf("%d %d",&x,&y);
	//swap(x, y);
	swap(&x, &y);

	system("pause");
	return 0;
}