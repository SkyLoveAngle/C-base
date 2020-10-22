#include <stdio.h>
int main()
{
	//问题1：在屏幕上打印一个单引号'，怎么做？
	//问题2：在屏幕上打印一个字符串，字符串的内容是一个双引号“，怎么做？
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	

	printf("%d\n", strlen("abcdef"));
	// \32被解析成一个转义字符
	printf("%d\n", strlen("c:\test\32\test.c"));
	printf("%d\n",i);

	system("pause");
	return 0;



}
