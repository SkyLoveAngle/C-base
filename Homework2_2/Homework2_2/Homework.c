#include<stdio.h>

int main() {
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 10 == 9) { //count++作用域问题
			count++;
			printf("%d\n", i);
		}
		if (i / 10 == 9) {
			count++;
			printf("%d\n", i);
		}
	}	
	printf("%d\n",count);
	system("pause");
	return 0;
}