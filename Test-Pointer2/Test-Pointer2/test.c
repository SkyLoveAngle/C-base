/*
#include <stdio.h>
//演示实例
int main()
{
	int n = 10;
	char *pc = (char*)&n;
	int *pi = &n;
	printf("%p\n", &n);
	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	printf("%p\n", pi);
	printf("%p\n", pi + 1);
	system("pause");
	return 0;
}
*/
/*
//演示实例
#include <stdio.h>
int main()
{
	int n = 0x11223344;
	char *pc = (char *)&n;
	char *pi = &n;
	*pc = 0x55;//重点在调试的过程中观察内存的变化。
	*pi = 0; //重点在调试的过程中观察内存的变化。
	system("pause");
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("  arr  =%p\n", arr);
	printf("&arr[0]=%p\n", &arr[0]);
	system("pause");
	return 0;
}
*/
/**/
#include <stdio.h>
/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int *p = arr; //指针存放数组首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i<sz; i++)
	{
		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
	}
*/
/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p = arr; //指针存放数组首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i<sz; i++)
	{
		printf("%d ", *(p + i));
	}
*/
int main()
{
	char ch = 'w';
	char *pc = &ch;
	*pc = 'w';
	return 0;
}
int main()
{
	char* pstr = "hello bit.";//这里是把一个字符串放到pstr指针变量里了吗？
	printf("%s\n", pstr);
	return 0;




	system("pause");
	return 0;
}