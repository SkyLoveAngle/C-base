#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

// ֻ��Ҫ��ԭ�ַ���������, ���������������������п����� 7�λᵽԭ�ַ���
// �ٿ�һ�´����ַ����ǲ��������ַ���(���������ַ��������)
// ����� �ҵ��� ��strstr����ֵ �����ǿ�NULL

int strRoundStr(char* src, char* find) {
	char tmp[256] = { 0 };
	// ʹsrc��tmp ��������
	strcpy(tmp, src);
	strcat(tmp, src);
	// �������ֵ���ǿ� ����1 �����ҵ���
	// �������ֵΪ0, ��û�ҵ�
	return strstr(tmp, find) != NULL;
}

int main() {
	char src[] = "ABCDEFG";
	char find[] = "GA";// ������һ��֮��Ľ��
	printf("%d\n", strRoundStr(src, find));// �ҵ���
	char find1[] = "GAa";
	printf("%d\n", strRoundStr(src, find1));// û�ҵ�
	system("pause");
	return 0;
}
