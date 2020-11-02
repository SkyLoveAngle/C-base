
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
/*
编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。
*/
/*
void reverse_string(char *string)
{
	if (*string == '\0')
	{
		return;
	}
	reverse_string(string + 1);
	printf("%c", *string);
}
*/

/* 
//1. 给两个指针，left放在字符串左侧，right放在最后一个有效字符位置
//2. 交换两个指针位置上的字符
//3. left指针往后走，right指针往前走，只要两个指针没有相遇，继续2，两个指针相遇后，逆置结束
void reverse_string(char* arr)
{
	char *left = arr;
	char *right = arr + strlen(arr) - 1;
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
		printf("%c", *arr);
	}
}
*/

/*
1. 交换a和g，
2. 以递归的方式逆置源字符串的剩余部分，
剩余部分可以看成一个有效的字符串，再以类似的方式逆置
*/
/**/
void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);
	*(arr + len - 1) = tmp;
}

int main()
{
	char *arr = "abcdefg";
	reverse_string(*arr);
	system("pause");
	return 0;
}




