#include<stdio.h>
#include<stdlib.h>
//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。

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