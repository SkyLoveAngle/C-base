#include <stdio.h>
int main()
{

/*	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i = i + 1;
	}
*/

/*	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i = i + 1;
	}
*/

/*	int i = 1;
	while (i <= 10)
	{
		i = i + 1;
		if (i == 5)
			continue;
		printf("%d ", i);
	}
*/

	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000;year++) {
		if ((year%400==0)||(year%4==0)&&(year%100 !=0)) {
			printf("%d\t",year);
			count++;
		}
		else {
		continue;
		}
	}

	system("pause");
	return 0;
}


