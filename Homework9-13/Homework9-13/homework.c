#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
���磺2+22+222+2222+22222
*/
int main() {
	int n;
	int i;
	int sum = 0;
	scanf("%d", &n);
	int tmp = n;//��ʱ�����������������
	for (i = 0; i < 5; i++) {
		sum = sum + n;//����ǰ������ۼ�
		n = n * 10 + tmp;//����*10+�������,������һ����ʱ�������������������
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
