#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	//int arr[] = { 1,2,3,4 };
	////sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。单位：字节bit.
	////arr数组有4个元素，每个元素为int型，故总共大小为4*4个字节。
	//printf("%d\n", sizeof(arr));
	////(arr+0)数组名隐式转换成指针，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(arr + 0));
	////*arr操作将数组名转换成指针，其指向的是首元素指针，即1个int型，占4个字节。
	//printf("%d\n", sizeof(*arr));
	////(arr+1)操作数组名隐式转换成指针，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(arr + 1));
	////数组下标为1的元素大小，其实质在求sizeof(int)。占4个字节。
	//printf("%d\n", sizeof(arr[1]));
	////&arr得到的是数组指针int(*)[4]，其本质是指针，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(&arr));
	////&arr得到一个数组指针。*&arr则是进行解引用操作，得到的是一个int[4]数组，故占4*4个字节。
	//printf("%d\n", sizeof(*&arr));
	////arr隐式转换成首元素指针，*arr对指针进行解引用得到int，再进行&*arr取地址操作得到的int*，占4个字节。
	//printf("%d\n", sizeof(&*arr));
	////&arr得到的是数组指针int(*)[4]，其本质是指针，&arr+1类型不变，任然是指针，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(&arr + 1));
	////首元素取地址后是一个int*指针，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(&arr[0]));
	////首元素取地址后是一个int*指针，+1不影响其类型，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(&arr[0] + 1));

	//char arr[] = { 'a','b','c','d','e','f' };

	////sizeof(char[6]),char类型大小为1个字节，6个元素的大小为6个字节。
	//printf("%d\n", sizeof(arr));

	////sizeof(char*),字符数组隐式转换成字符指针，+多少不影响其类型，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(arr + 0));

	////sizeof(char),arr获得的是数组首元素的指针，*arr得到的是数组首元素。占1个字节。
	//printf("%d\n", sizeof(*arr));

	////sizeof(char),相当于在求数组下标为1的数组元素的大小。占1个字节。
	//printf("%d\n", sizeof(arr[1]));

	////sizeof(char(*)[6]),&arr得到的是一个数组指针，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(&arr));

	////sizeof(char[6]),&arr得到一个数组指针，*&arr对该数组指针进行解引用操作，获得一个数组，占6个字节。
	//printf("%d\n", sizeof(*&arr));

	////sizeof(char*),*arr得到数组首元素，&*arr对首元素进行取地址得到一个指针char*,在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(&*arr));

	////sizeof(char*),&arr[1]得到的是char*，+几都不影响其类型，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(&arr[1]+1));

	////sizeof(char(*)[6]),&arr得到一个数组指针，+几都不影响其类型，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(&arr + 1));
	//

	////未定义行为，strlen的实现是从头开始遍历数组每个字符，count++，直到遇见“\0”停止计数，
	////但是arr是字符数组不是字符串，其后不确定是否存在“\0”，故该操作属于未定义行为。
	//printf("%d\n", strlen(arr));

	////未定义行为，原因同上。
	//printf("%d\n", strlen(arr + 0));

	////*arr操作得到的是首元素，即字符“a”,其类型为char，strlen的参数类型是const char*类型，故该代码编译错误。
	//printf("%d\n", strlen(*arr));


	//char arr[] = "abcdef";

	////此处arr[]是一个字符串，其末尾包含“\0”，故其大小为7个char类型元素，占7个字节。
	//printf("%d\n", sizeof(arr));

	////sizeof(char*),对数组名进行运算就会将数组名隐式转换成指针，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(arr + 0));

	////sizeof(char)，*arr操作获得的是字符串首字符，其大小是1个char类型，占1个字节。
	//printf("%d\n", sizeof(*arr));

	////sizeof(char)，arr[1]获得的是下标为1的字符元素，其大小是1个char类型，占1个字节。
	//printf("%d\n", sizeof(arr[1]));

	////sizeof(char(*)[7])，&arr操作获得的是一个数组指针，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(&arr));

	////sizeof(char[7])，&arr操作获得的是一个数组指针，*&arr操作获得的是一个字符串数组，共占7个字节。
	//printf("%d\n", sizeof(*&arr));

	////sizeof(char*)，*arr操作获得字符串首元素，&*arr获得首元素地址，其类型是一个指针，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(&*arr));

	////sizeof(char*),&arr[0]操作获得的是一个字符指针，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(&arr[0] + 1));

	////结果：6，strlen计算的是字符串的长度，不计算“\0”。当算占用的内存空间需要包含“\0”。
	//printf("%d\n", strlen(arr));

	////结果：5，arr获得第1个元素地址，arr+1获得第2个元素地址，即从第2个元素开始计算字符串长度。
	//printf("%d\n", strlen(arr + 1));
	//
	////未定义行为，&arr获得的是一个数组指针，&arr+1则是跳过整个数组，即到“\0”后面了。编译失败。
	//printf("%d\n", strlen(&arr + 1));
	//
	////类型不匹配，strlen参数类型是const char*类型，而&arr的类型是char(*)[7]，编译会失败。
	////但是在实际中，&arr获得的理论上是数组指针，但是实际是arr[0]首元素的地址，其类型是char*，所以实际编译会通过。
	//printf("%d\n", strlen(&arr));



	//char* p = "abcdef";

	////结果：4，sizeof(char*)，此处p是一个指针类型，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(p));

	////结果：4，sizeof(char*)，此处p是一个指针类型，对其运算不影响其类型，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(p + 1));

	////结果：1，sizeof(char)，*p对p进行解引用操作，获得了字符串首元素。
	//printf("%d\n", sizeof(*p));

	////结果：1，sizeof(char)，p[0]得到的是字符串首元素。
	//printf("%d\n", sizeof(p[0]));

	////结果：4，sizeof(char**)，得到了一个二级指针，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(&p));

	////结果：4，sizeof(char*)，&p得到一个char**二级指针，*&p对其进行解引用得到char*指针，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(*&p));

	////结果：4，sizeof(char*)，*p对p解引用得到一个char类型，&*p对其取地址得到char*指针，在32位系统下指针占4个字节。
	//printf("%d\n", sizeof(&*p));

	////结果：4，sizeof(char*)，p[1]得到一个字符串元素，&p[1]得到一个char*指针类型，运算不影响其类型，在32位系统下指针占4个字节。。
	//printf("%d\n", sizeof(&p[1] + 1));

	////结果：6，strlen计算的是字符串的长度，不计算“\0”。
	//printf("%d\n", strlen(p));

	////结果：5，p获得第1个元素地址，p+1获得第2个元素地址，即从第2个元素开始计算字符串长度。
	//printf("%d\n", strlen(p + 1));

	////类型不匹配。p本身是char*类型，*p对其解引用操作获得的是char类型。
	//printf("%d\n", strlen(*p));

	////类型不匹配。p[1]获得的是下标为1的字符元素，其类型是char类型。
	//printf("%d\n", strlen(p[1]));

	////类型不匹配。&p获得的是char**类型。
	//printf("%d\n", strlen(&p));

	////结果：6。&p获得char**类型，*&p获得char*类型数组指针，即计算数组长度。
	//printf("%d\n", strlen(*&p));

	////结果：6。*p获得char类型，&*p获得char*类型数组指针，即计算数组长度。
	//printf("%d\n", strlen(&*p));

	////结果：4。p[1]获得下标为1的字符元素，&p[1]获得下标为1的字符元素地址，
	////&p[1]+1获得下标为2的字符元素地址，即从下标为2的字符元素开始计算长度。
	//printf("%d\n", strlen(&p[1] + 1));


//int arr[3][4] = { 0 };
//
//	//结果：48。sizeof(int[3][4])。arr数组有3*4个元素，每个元素都是in类型，占3*4*4个字节。
//	printf("%d\n", sizeof(arr));
//
//	//结果：4。sizeof(int)。arr[0][0]得到二维数组的第一个元素，类型为int。
//	printf("%d\n", sizeof(arr[0][0]));
//
//	//结果：16。sizeof(int[4])。arr[0]获得的是长度为4的一维数组，其中每个元素
//	printf("%d\n", sizeof(arr[0]));
//
//	//结果：4。sizeof(int*)。arr[0] + 1将数组隐式转换成指针，在32位系统下指针占4个字节。
//	printf("%d\n", sizeof(arr[0] + 1));
//
//	//结果：48。sizeof(int)。arr[0]获得一个数组，由于前面是运用了*，
//	//故该处数组隐式转换成指针，*为解引用，又变成了数组元素。
//
//	//结果：16。sizeof(int[4])。arr从二维数组隐式转换成指针int(*)[4]，在对其解引用操作又将其变成一个数组int[4]。
//	printf("%d\n", sizeof(*arr));
//
//	//结果：4。sizeof(int*)。*arr先将arr隐式转换成一个数组指针int(*)[4]，然后解引用成数组int[4]，
//	//*arr+1又将其转换成指针，在32位系统下指针占4个字节。
//	printf("%d\n", sizeof(*arr + 1));
//
//	//结果：16。sizeof(int[4])。arr+1将数组隐式转换成数组指针nt(*)[4]，在对其解引用操作又将其变成一个数组int[4]。
//	printf("%d\n", sizeof(*(arr + 1)));
//
//	//结果：4。sizeof(int(*)[4])。arr[0]得到一个数组，&arr[0]得到一个数组指针，
//	//对指针进行运算不改变其类型，在32位系统下指针占4个字节。
//	printf("%d\n", sizeof(&arr[0] + 1));
//
//	//结果：4。sizeof(int(*)[4])。arr[0]获得一个数组，&arr[4]获得一个int(*)[4]数组指针,运算无法改变指针类型。在32位系统下指针占4个字节。
//	printf("%d\n", sizeof(&arr[0] + 1));
//
//	//结果：4。sizeof(int(*)[4])。int[3][4]是一个长度为3的二维数组，其下标取值只能是0,1,2
//	//所以取值10已经超过了下标，但是代码可以运行，叫做编译器求值，不是未定义行为，
//	//代码编译完了之后生成的二进制指令相当于printf("%d\n",4)，在运行过程中不涉及内存访问，更没有数组下标越界。
//	printf("%d\n", sizeof(arr[10]));


//int a[5] = { 1, 2, 3, 4, 5 };
//int *ptr = (int *)(&a + 1);
//printf("%d,%d", *(a + 1), *(ptr - 1));
//

int arr[4] = { 1, 2, 3, 4 };
int *ptr1 = (int *)(&arr + 1);
int *ptr2 = (int *)((int)arr + 1);
printf("%x,%x", ptr1[-1], *ptr2);

system("pause");
return 0;
}
