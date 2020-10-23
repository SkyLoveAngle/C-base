#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {

	//for (int i = 1; i<=100;i++) {
	//	if (i%3==0) {
	//		printf("%d\n", i);
	//	}
	//}
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}