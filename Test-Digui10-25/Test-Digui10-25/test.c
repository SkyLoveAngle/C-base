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
//	printf("请输入你要查询的数字：");
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("第%d个斐波那契数字是%d：\n", n,ret);
//	system("pause");
//	return 0;
//}

/*
一只青蛙一次可以跳上1级台阶，也可以跳上2级。
求该青蛙跳上一个n级的台阶总共有多少种跳法。
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
//	printf("请输入台阶数:");
//	scanf("%d", &n);
//	f(n);
//	printf("青蛙一共可以有%d种跳法!\n", f(n));
//	system("pause");
//	return 0;
//}


/*
猴子第一天摘下N个桃子，当时就吃了一半，还不过瘾，就又多吃了一个。
第二天又将剩下的桃子吃掉一半，又多吃了一个。
以后每天都吃前一天剩下的一半零一个。
到第10天在想吃的时候就剩一个桃子了.
问第一天共摘下来多少个桃子？并反向打印每天所剩桃子数。 
*/
//int getnum(int n) {
//	int num;
//	if (n == 10) {
//		return 1;
//	}
//	else {
//		num = ((getnum(n + 1) + 1) * 2);
//		printf("%d天,猴子还剩%d个桃子!\n", n, num);
//	}
//	return num;
//}
//
//int main() {
//	int n = 1;
//	int num = getnum(n);
//	printf("猴子第1天一共摘了%d只桃子!\n",num);
//	system("pause");
//	return 0;
//}



/* 定义获取单词数量的函数 */
//int getWordNumber(int n)
//{
//	if (n == 1)
//	{
//		return 1;    //第一天只会1个单词
//	}
//	else {
//		return getWordNumber(n - 1) + n;       //到第n天会的单词数量
//	}
//}
//int main()
//{
//	int num = getWordNumber(10);     //获取会了的单词数量
//	printf("小明第10天记了:%d个单词。\n", num);
//	system("pause");
//	return 0;
//}

/*
有5个人坐在一起，问第5个人多少岁？他说比第4个人大2岁。
问第4个人岁数，他说比第3个人大2岁。
问第3个人，又说比第2人大两岁。
问第2个人，说比第1个人大两岁。
最后 问第1个人，他说是10岁。
请问第5个人多大？
*/
//int getAge(n) {
//	int num;
//	if (n == 1) {
//		return 10;
//	}
//	else {
//		num = getAge(n-1)+2;
//		printf("第%d个人的年龄是:%d\n", n, num);
//	}
//	return num;
//}
//int main() {
//	int num = 5;
//	int a = getAge(num);
//	printf("第5个人的年龄是:%d",a);
//	system("pause");
//	return 0;
//}

/*
喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水
给20元，可以多少汽水。
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
	printf("请输入你想购买的金额:");
	scanf("%d", &money);
	int bottlenum = drink(money);
	printf("您一共可以喝到%d瓶汽水!", bottlenum);
	system("pause");
	return 0;
}

/*
汉诺塔问题
*/
void hanoi(char start, char tmp, char end, int n)
{
	if (1 == n)
	{
		printf("%d 从%c 柱到%c 柱\n ", n, start, end);
		return;
	}
	hanoi(start, end, tmp, n - 1);
	printf("%d 从%c 柱到%c 柱\n", n, start, end);
	hanoi(tmp, start, end, n - 1);
}
int main()
{
	int n = 0;
	printf("请输入A柱上盘子的数量:\n");
	scanf("%d", &n);
	hanoi('A', 'B', 'C', n);
	system("pause");
	return 0;
}
