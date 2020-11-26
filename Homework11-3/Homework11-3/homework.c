#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int myStrcmp(const char* str1, const char* str2) {
	assert(str1 != NULL && str2 != NULL);
	while (*str1 != '\0' && *str2 != '\0') {
		if (*str1 < *str2) {
			return -1;
		}
		else if (*str1 > *str2) {
			return 1;
		}
		else {
			str1++;
			str2++;
		}
	}
	if (*str1 < *str2) {
		return -1;
	}
	else if (*str1 > *str2) {
		return 1;
	}
	else {
		return 0;
	}
}

int main()
{
	char arr[32] = "abcd";
	char arr1[32] = "ab";
	int ret = myStrcmp(arr, arr1);
	printf("%d\n", ret);
	system("pause");
	return 0;
}