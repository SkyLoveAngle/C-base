
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
/*
��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������
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
//1. ������ָ�룬left�����ַ�����࣬right�������һ����Ч�ַ�λ��
//2. ��������ָ��λ���ϵ��ַ�
//3. leftָ�������ߣ�rightָ����ǰ�ߣ�ֻҪ����ָ��û������������2������ָ�����������ý���
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
1. ����a��g��
2. �Եݹ�ķ�ʽ����Դ�ַ�����ʣ�ಿ�֣�
ʣ�ಿ�ֿ��Կ���һ����Ч���ַ������������Ƶķ�ʽ����
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




