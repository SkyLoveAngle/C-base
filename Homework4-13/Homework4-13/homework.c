#include<stdio.h>
#include<stdlib.h>
//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������

int isPrime(int num) {
	if (num ==0 || num==1) {
		return 0;
	}
	for (int i = 2; i< num;i++) {
		if (num%i==0) {
			return 0;
		}
	}
	return 1;	
}

int main() {
	int i = 1;
	for (i = 100; i<= 200;i++) {
		if (isPrime(i) == 1) {
			printf("%d is prime!\n",i);
		}
	}
	system("pause");
	return 0;
}


/*
int is_prime(int i)
{
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i%j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d\t", i);
		}
	}
	system("pause");
	return 0;
}
*/