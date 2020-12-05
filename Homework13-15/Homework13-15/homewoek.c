#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char*my_strncpy(char*dest, const char*src, size_t n)
{
	assert(dest != NULL);
	assert(src != NULL);
	char*ret = dest;
	while (n)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	return ret;
}

int main()
{
	char arr[20] = { 0 };
	char*p = "Hello,bit";
	int n = 0;
	printf("请输入拷贝的字符个数：\n");
	scanf("%d", &n);
	char*ret = my_strncpy(arr, p, n);
	printf("%s\n", ret);
	system("pause");
	return 0;
}