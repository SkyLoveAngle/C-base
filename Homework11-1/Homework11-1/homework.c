#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

const char* myStrstr(const char* str1, const char* str2) {
	if (str1 == NULL || str2 == NULL) {
		return NULL;
	}
	const char* blackPtr = str1;
	while (*blackPtr != '\0') {
		const char* redPtr = blackPtr;
		const char* subPtr = str2;
		while (*redPtr != '\0' && *subPtr != '\0'
			&& *redPtr == *subPtr) {
			redPtr++;
			subPtr++;
		}
		if (*subPtr == '\0') {
			return blackPtr;
		}
		blackPtr++;
	}
	return NULL;
}
int main()
{
	char str1[] = "aabbcc";
	char str2[] = "bc";
	char *res = myStrstr(str1, str2);
	printf("%s\n", res);
	system("pause");
	return 0;
}