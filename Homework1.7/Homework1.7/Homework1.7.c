#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//int main() {
//
//	int x=0, y=0, z=0,tmp=0;
//	printf("请输入3个数字(以空格键分开):");
//	scanf("%d", "%d", "%d",x,y,z);
//	if (x<y) {
//		tmp= x;
//		x = y;
//		y= tmp;
//	}
//	if (x < z) {
//		tmp = z;
//		x = z;
//		z = tmp;
//	}
//	if (y<z) {
//		tmp=y;
//		y = z;
//		z = tmp;
//	}
//	printf("三个数按照由大到小的顺序排序为:%d,%d,%d",z,y,x);
//
//
//	system("pause");
//	return 0;
//}

int main()
{
	int a = 2;
	int b = 3;
	int c = 1;
	if (a<b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a<c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b<c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("a=%d b=%d c=%d\n", a, b, c);
	system("pause");
	return 0;
}