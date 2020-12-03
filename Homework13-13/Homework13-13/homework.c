#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int myAtoi(const char* str) {
	//参数合法性校验
	assert(str != 0);
	int num = 0;
	int flag = 1;
	while (*str == ' ') {
		str++;
	}
	if (*str == '-') {
		flag = -1;
	}
	if (*str == '-' || *str == '+') {
		str++;
	}
	while (*str >= '0'&&*str <= '9') {
		num = num * 10 + (*str - '0');
		str++;
	}
	return flag * num;
}
int main() {
	char* ptr1 = "-12345.12";
	char* ptr2 = "+1234w34";
	char* ptr3 = "   456er12";
	char* ptr4 = "789 123";
	int a = myAtoi(ptr1);
	int b = myAtoi(ptr2);
	int c = myAtoi(ptr3);
	int d = myAtoi(ptr4);
	printf("a=%d  b=%d c=%d  d=%d\n", a, b, c, d);
	system("pause");
	return 0;
}

