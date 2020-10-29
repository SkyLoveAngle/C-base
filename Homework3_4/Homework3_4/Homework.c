/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n;
	printf("请输入要打的行数\n");
	scanf("%d", &n);
	chart(n);
	system("pause");
	return 0;
}

void chart(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%d\t", j, i, i*j);
		}
		printf("\n");
	}

}
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n;
	printf("请输入要打印的行数:");
	scanf("%d",&n);
	chengfabiao(n);
	system("pause");
	return 0;
}
void chengfabiao(int n) {
	for (int i = 1; i <= n;i++) {
		for (int j = 1; j <= i;j++) {
			printf("%d*%d=%d\t",j,i,j*i);
		}
		printf("\n");
	}
}