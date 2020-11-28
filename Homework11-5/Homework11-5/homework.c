#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

size_t myStrlen(const char* str) {
	if (str == NULL) {
		return 0;
	}
	size_t len = 0;
	while (str[len] != '\0') {
		len++;
	}
	return len;
}
int main()
{

	char* p = "hello world!";
	printf("%d", myStrlen(p));
	system("pause");
	return 0;
}