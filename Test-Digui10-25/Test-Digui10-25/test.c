#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int fib(int n)
//{
//	if (n <= 2)
//		return  1;
//	else
//		return  fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("��������Ҫ��ѯ�����֣�");
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("��%d��쳲�����������%d��\n", n,ret);
//	system("pause");
//	return 0;
//}

/*
һֻ����һ�ο�������1��̨�ף�Ҳ��������2����
�����������һ��n����̨���ܹ��ж�����������
*/
//int f(int n) {
//	if (n <= 2) {
//		return n;
//	}
//	else {
//		return f(n - 1) + f(n - 2);
//	}
//}
//int main() {
//	int n = 4;
//	printf("������̨����:");
//	scanf("%d", &n);
//	f(n);
//	printf("����һ��������%d������!\n", f(n));
//	system("pause");
//	return 0;
//}


/*
���ӵ�һ��ժ��N�����ӣ���ʱ�ͳ���һ�룬������񫣬���ֶ����һ����
�ڶ����ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
�Ժ�ÿ�춼��ǰһ��ʣ�µ�һ����һ����
����10������Ե�ʱ���ʣһ��������.
�ʵ�һ�칲ժ�������ٸ����ӣ��������ӡÿ����ʣ�������� 
*/
//int getnum(int n) {
//	int num;
//	if (n == 10) {
//		return 1;
//	}
//	else {
//		num = ((getnum(n + 1) + 1) * 2);
//		printf("%d��,���ӻ�ʣ%d������!\n", n, num);
//	}
//	return num;
//}
//
//int main() {
//	int n = 1;
//	int num = getnum(n);
//	printf("���ӵ�1��һ��ժ��%dֻ����!\n",num);
//	system("pause");
//	return 0;
//}



/* �����ȡ���������ĺ��� */
//int getWordNumber(int n)
//{
//	if (n == 1)
//	{
//		return 1;    //��һ��ֻ��1������
//	}
//	else {
//		return getWordNumber(n - 1) + n;       //����n���ĵ�������
//	}
//}
//int main()
//{
//	int num = getWordNumber(10);     //��ȡ���˵ĵ�������
//	printf("С����10�����:%d�����ʡ�\n", num);
//	system("pause");
//	return 0;
//}

/*
��5��������һ���ʵ�5���˶����ꣿ��˵�ȵ�4���˴�2�ꡣ
�ʵ�4������������˵�ȵ�3���˴�2�ꡣ
�ʵ�3���ˣ���˵�ȵ�2�˴����ꡣ
�ʵ�2���ˣ�˵�ȵ�1���˴����ꡣ
��� �ʵ�1���ˣ���˵��10�ꡣ
���ʵ�5���˶��
*/
//int getAge(n) {
//	int num;
//	if (n == 1) {
//		return 10;
//	}
//	else {
//		num = getAge(n-1)+2;
//		printf("��%d���˵�������:%d\n", n, num);
//	}
//	return num;
//}
//int main() {
//	int num = 5;
//	int a = getAge(num);
//	printf("��5���˵�������:%d",a);
//	system("pause");
//	return 0;
//}

/*
����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ
��20Ԫ�����Զ�����ˮ��
*/
int drink(money) {
	int sum;
	if (money<1) {
		return 1;
	}
	else {
		sum = (drink(money / 2) + money);
	}
	return sum;
}
int main() {
	int money = 1;
	printf("���������빺��Ľ��:");
	scanf("%d", &money);
	int bottlenum = drink(money);
	printf("��һ�����Ժȵ�%dƿ��ˮ!", bottlenum);
	system("pause");
	return 0;
}

/*
��ŵ������
*/
void hanoi(char start, char tmp, char end, int n)
{
	if (1 == n)
	{
		printf("%d ��%c ����%c ��\n ", n, start, end);
		return;
	}
	hanoi(start, end, tmp, n - 1);
	printf("%d ��%c ����%c ��\n", n, start, end);
	hanoi(tmp, start, end, n - 1);
}
int main()
{
	int n = 0;
	printf("������A�������ӵ�����:\n");
	scanf("%d", &n);
	hanoi('A', 'B', 'C', n);
	system("pause");
	return 0;
}
