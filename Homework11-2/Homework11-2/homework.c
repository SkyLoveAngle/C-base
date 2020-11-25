#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

char* myStrcat(char* dest, const char* src) {
	if (dest == NULL || src == NULL) {
		return dest;
	} 
	char* p = dest;
	while (*p != '\0') {
		p++;
	}
	while (*src != '\0') {
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return dest;
}

int main()
{
	char a[20] = "Hello ";
	char *p = "world!";
	printf("%s\n", myStrcat(a, p));
	system("pause");
	return 0;
}
