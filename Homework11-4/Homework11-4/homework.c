#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

char* myStrcpy(char* dest, const char* src) {
	if (dest == NULL || src == NULL) {
		return NULL;
	}
	char* ret = dest;
	while (*src != '\0') {
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return ret;
}

int main()
{
	char arr[20] = { 0 };
	char *p = "hello word";
	printf("%s\n", myStrcpy(arr, p));
	system("pause");
	return;
}