#include<stdio.h>
/*
дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
arr��һ������һά���顣
*/
void PrintArr(int arr[]) {
	int i = 0;
	int* p = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));//ָ��
	}
}
int main() {
	int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
	PrintArr(arr);
	system("pause");
	return 0;
}