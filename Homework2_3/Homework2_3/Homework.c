#include<stdio.h>
int main() {
	int i = 1;
	double fenmu = 2.0, sum = 1.0, fenshu = 1.0;
	while (fenmu<=100) {
		i = -i;
		fenshu = i / fenmu;
		sum = sum + fenshu;
		fenmu++;
	}
	printf("%f\n",sum);
	system("pause");
	return 0;
}