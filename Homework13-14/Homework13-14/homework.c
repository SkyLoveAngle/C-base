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
//�ж�Դ�ַ��������Ƿ�С��len
	if (strlen(src) < len) 
	{
		len = strlen(src);
	}
	
	while (len--)
	{
		*dest++ = *src++;
	}
//strncat�����ڽ���������'\0'����������'\0'���Ŀ��ʣ��ռ�
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

