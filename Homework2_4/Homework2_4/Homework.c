#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 20
		;
	int sz = sizeof(arr) / sizeof(arr[0]);//����������Ԫ�ظ���

	int left = 0;//��������������±�
	int right = sz - 1;//�������ұ������±�

	while (left <= right)//��ֹ����
	{
		int mid = (left + right) / 2;//mid���м������±�
		if (arr[mid] > k)
		{
			right = mid - 1;//�м�����k�ұߣ����ҷ�Χ��Ϊ����ߵ������м���ǰһ����֮��
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;//�м�����K��ߣ����ҷ�Χ��Ϊ�м�����һ���������ұߵ���֮��
		}

		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)//������ң�������
	{
		printf("�Ҳ�����\n");
	}
	system("pause");
	return 0;
}
