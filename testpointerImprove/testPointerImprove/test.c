
#include <stdio.h>
void test(){
	printf("Hello World!\n");
}
int main(){
	printf("%p\n", test);
	printf("%p\n", &test);
	system("pause");
	return 0;
}





//#include<stdio.h>
//#include<stdlib.h>
//
//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		//һ��ָ��p����������
//		print(p, sz);
//	system("pause");
//	return 0;
//}


//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<row; i++){
//		for (j = 0; j<col; j++){
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++){
//		for (j = 0; j < col; j++){
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	//	char a = 'a';
//	//	char* p1 = &a;
//	//	char arr[100] = "Hello Word!";
//	//	char* p2 = arr; 
//
//	//char str1[] = "Hello World!";
//	//char str2[] = "Hello World!";
//	//char *str3 = "Hello World!";
//	//char *str4 = "Hello World!";
//	//if (str1 == str2)//���鲻��ֱ�ӱȽϣ��˴�������ת����ָ����ʽ
//	//	printf("str1 and str2 ��ȣ�\n");
//	//else
//	//	printf("str1 and str2 ����ȣ�\n");
//	//if (str3 == str4)
//	//	printf("str3 and str4 ��ȣ�\n");
//	//else
//	//	printf("str3 and str4 ����ȣ�\n");
//
//	/*
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("&arr= %p\n", &arr);
//	printf("arr+1 = %p\n", arr + 1);
//	printf("&arr+1= %p\n", &arr + 1);
//	*/
//
//	//int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	//print_arr1(arr, 3, 5);
//	//printf("=========================\n");
//	//print_arr2(arr, 3, 5);
//
//
//	int arr[10] = { 0 };
//	system("pause");
//	return 0;
//}
