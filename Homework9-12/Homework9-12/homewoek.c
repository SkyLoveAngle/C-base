#include <stdio.h>
#include<windows.h>
#include<string.h>
void reverse(char *str)
{
	int len = strlen(str);//¼ÆËã×Ö·û´®³¤¶È
	char *left = str;
	char *right = str + len - 1;
	char tmp = 0;
	while (left<right)//×óÓÒ½»»»×Ö·û
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

}
int main()
{
	char arr[] = "Hello World!";
	reverse(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}
