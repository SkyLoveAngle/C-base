#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

char* MyStrncat(char* dest, char* src, size_t len)
{
	assert(NULL != dest && NULL != src);

	char* ret = dest;
	int offset = 0;
	while (*dest)
	{
		*dest++;
	}
//判断源字符串长度是否小于len
	if (strlen(src) < len) 
	{
		len = strlen(src);
	}
	
	while (len--)
	{
		*dest++ = *src++;
	}
//strncat总是在结果后面添加'\0'，而不是用'\0'填充目标剩余空间
	*dest = '\0'; 
	return ret;
}

int main()
{
	char arr1[6] = "World";
	char arr2[15] = "Hello ";
	printf("%s\n", MyStrncat(arr2, arr1, 9));
	system("pause");
	return 0;
}

