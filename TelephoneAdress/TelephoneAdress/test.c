#include<stdio.h>
#include<Windows.h>
#include<string.h>
#pragma warning(disable:4996)

typedef struct address {
	char Name[10];
	int Sex;
	int Age;
	char Num[12];
	char Address[32];


}List;

void addinfor(List *l) {  //�����ϵ��
						  //int s , age, num, add;
	printf("�������û�����:");
	scanf("%s", l->Name);
	printf("\n�������û��Ա�1.�� �� 2.Ů����");
	scanf("%d", &(l->Sex));
	printf("\n�������û�����:");
	scanf("%d", &(l->Age));
	printf("\n�������û��ĵ绰���룺");
	scanf("%s", l->Num);
	printf("\n�������û��ĵ�ַ:");
	scanf("%s", l->Address);

}

void showlist(List l) {  //show����
	if (strcmp(l.Name, "NULL") == 0) {
		return;
	}
	printf("\n������%s", l.Name);
	if (l.Sex == 1) {
		printf("\n�Ա�: ��");
	}
	else {
		printf("\n�Ա�: Ů");
	}
	printf("\n���䣺%d", l.Age);
	printf("\n�绰���룺%s", l.Num);
	printf("\n��ַ��%s", l.Address);
}

int searchfor(List l, char *s) {  //Ѱ�Һ���������1
	if (strcmp(l.Name, s) == 0) {
		return 1;
	}
	else {
		return 0;
	}

}

void changeList(List *l) {  //�޸���ϵ��
	printf("������Ҫ�޸ĵ���ϵ��:");
	char s[10];
	scanf("%s", s);
	for (int i = 0; i < 10; i++) {
		if (searchfor(l[i], s)) {
			printf("\n�������޸ĺ������");
			addinfor(&(l[i]));
			break;
		}
	}
}

void DelList(List *l) {   //ɾ����ϵ�ˣ�Ҫɾ������ϵ���������ó�NULL
	printf("������Ҫɾ������ϵ��:");
	char s[10];
	scanf("%s", s);
	for (int i = 0; i<2; i++) {
		if (searchfor(l[i], s)) {

			strcpy(l[i].Name, "NULL");
			printf("ɾ���ɹ�\n");
			return;
		}
	}
	printf("���޴���\n");
}


int main() {
	List l[100];
	for (int i = 0; i < 2; i++) {
		addinfor(&(l[i]));
	}
	//addinfor(&l); //�����Ϣ
	printf("\n");
	DelList(l);
	for (int j = 0; j < 2; j++) {
		showlist(l[j]); //show����
	}

	FILE* log = fopen("log.txt", "wb");   //�ļ�д��
	for (int i = 0; i < 2; i++) {
		if (l[i].Name != "NULL") {
			fwrite(&l[i], sizeof(List), 1, log);
		}
	}
	fclose(log);

	log = fopen("log.txt", "rb");
	for (int i = 0; i < 2; i++) {
		fread(&l[i], sizeof(List), 1, log); // ��1���ṹ
	}
	fclose(log);
	system("pause");
	return 0;
}