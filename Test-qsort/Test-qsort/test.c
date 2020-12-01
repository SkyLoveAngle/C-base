                                    //qsort排序具体样例
//整形类型
/*
#include<stdio.h>
#include<stdlib.h>
#define L 20
int inc(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}
int main()
{
	int a[L] = { 0, 5, 2, 3, 4, 9, 8, 7, 6, 1,
		11, 15, 14, 12, 13, 16, 17, 18, 19, 10 };
	qsort(a, L, sizeof(int), inc);
	for (int i = 0; i < L; i++)
	{
		printf("%d ", a[i]);	
	}
	system("pause");	
	return 0;
}
*/

//double类型
/*
#include<stdio.h>
#include<stdlib.h>
#define L 20
int inc(const void *a, const void *b)
{
	return *(double *)a > *(double *)b ? 1 : -1;
}
int main()
{
	double a[L] = { 0.1, 0.11, 1.1, 1.5, 1.8, 1.51, 2.5, 2.9, 1.3, 0.8,
		15.5, 7.9, 8.5, 8.51, 8.6, 3, 1.41, 1.11, 1.51, 2 };
	qsort(a, L, sizeof(double), inc);
	for (int i = 0; i < L; i++)
	{
		printf("%.2lf\n", a[i]);
	}
	system("pause");
	return 0;
}
*/

//字符类型
/*
#include<stdio.h>
#include<stdlib.h>
#define L 20
int inc(const void *a, const void *b)
{
	return *(char *)a - *(char *)b;
}
int main()
{
	char a[L] = { 'q', 'w', 'r', 'h', 'a', 'v', 'g', 'e', 'b', 'l',
		'o', 'p', 'u', 'y', 't', 'c', 'x', 'i', 'z', 's' };
	qsort(a, L, sizeof(char), inc);
	for (int i = 0; i < L; i++)
	{
		printf("%c ", a[i]);
	}
	system("pause");
	return 0;
}
*/

//字符串类型，按首字母排序
/*
#include<stdio.h>
#include<stdlib.h>
#define L 10
#define K 10
int inc(const void *a, const void *b)
{
	return *(char *)a - *(char *)b;
}
int main()
{
	char a[L][K] = {
		"rbsc","jcse","efgd","arbs",
		"bbs","cbfe","dgafg" ,"ewqrta",
		"ofgd","mbcv",
	};
	qsort(a, L, sizeof(char) * K, inc);
	for (int i = 0; i < L; i++)
	{
		printf("%s\n", a[i]);
	}
	system("pause");
	return 0;
}
*/

//字符串类型，按长度排序
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define L 10
#define K 10
int inc(const void *a, const void *b)
{
	return strlen((char *)a) > strlen((char *)b) ? 1 : -1;
}
int main()
{
	char a[L][K] = {
		"rbsc","jcsse","efgdsd","arbs","bbs",
		"cbfefaa","dgafg" ,"ewqrta","ofgd","mbcv312",
	};
	qsort(a, L, sizeof(char) * K, inc);
	for (int i = 0; i < L; i++)
	{
		printf("%s\n", a[i]);
	}
	system("pause");
	return 0;
}
*/

//字符串类型，按字典顺序
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define L 10
#define K 10
int inc(const void *a, const void *b)
{
	return strcmp((char *)a, (char *)b);
}
int main()
{
	char a[L][K] = {
		"rbsc","jcsse","afgdsd","arbs","abs",
		"cbfefaa","cgafg" ,"ewqrta","ofgd","mbcv312",
	};
	qsort(a, L, sizeof(char) * K, inc);
	for (int i = 0; i < L; i++)
	{
		printf("%s\n", a[i]);
	}
	system("pause");
	return 0;
}
*/

//结构体二级排序
/**/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define L 10
typedef struct node {
	double first;
	int numb;
}node;
int inc(const void *a, const void *b)
{
	if ((*(node *)a).first != (*(node *)b).first)
		return (*(node *)a).first > (*(node *)b).first ? 1 : -1;
	else return (*(node *)a).numb - (*(node *)b).numb;

}
int main()
{
	node arr[L] = {
		1.0, 1,
		2.0, 2,
		1.1, 3,
		2.1, 4,
		3.5, 5,
		1.0, 6,
		1.1, 7,
		5.1, 8,
		5.0, 9,
		3.6, 10,

	};
	qsort(arr, L, sizeof(node), inc);
	for (int i = 0; i < L; i++)
	{
		printf("%.2lf %d\n", arr[i].first, arr[i].numb);
	}
	system("pause");
	return 0;
}
