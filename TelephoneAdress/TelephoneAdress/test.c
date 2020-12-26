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

void addinfor(List *l) {  //添加联系人
						  //int s , age, num, add;
	printf("请输入用户姓名:");
	scanf("%s", l->Name);
	printf("\n请输入用户性别（1.男 ， 2.女）：");
	scanf("%d", &(l->Sex));
	printf("\n请输入用户年龄:");
	scanf("%d", &(l->Age));
	printf("\n请输入用户的电话号码：");
	scanf("%s", l->Num);
	printf("\n请输入用户的地址:");
	scanf("%s", l->Address);

}

void showlist(List l) {  //show函数
	if (strcmp(l.Name, "NULL") == 0) {
		return;
	}
	printf("\n姓名：%s", l.Name);
	if (l.Sex == 1) {
		printf("\n性别: 男");
	}
	else {
		printf("\n性别: 女");
	}
	printf("\n年龄：%d", l.Age);
	printf("\n电话号码：%s", l.Num);
	printf("\n地址：%s", l.Address);
}

int searchfor(List l, char *s) {  //寻找函数，返回1
	if (strcmp(l.Name, s) == 0) {
		return 1;
	}
	else {
		return 0;
	}

}

void changeList(List *l) {  //修改联系人
	printf("输入你要修改的联系人:");
	char s[10];
	scanf("%s", s);
	for (int i = 0; i < 10; i++) {
		if (searchfor(l[i], s)) {
			printf("\n请输入修改后的内容");
			addinfor(&(l[i]));
			break;
		}
	}
}

void DelList(List *l) {   //删除联系人，要删除的联系人姓名设置成NULL
	printf("输入你要删除的联系人:");
	char s[10];
	scanf("%s", s);
	for (int i = 0; i<2; i++) {
		if (searchfor(l[i], s)) {

			strcpy(l[i].Name, "NULL");
			printf("删除成功\n");
			return;
		}
	}
	printf("查无此人\n");
}


int main() {
	List l[100];
	for (int i = 0; i < 2; i++) {
		addinfor(&(l[i]));
	}
	//addinfor(&l); //添加信息
	printf("\n");
	DelList(l);
	for (int j = 0; j < 2; j++) {
		showlist(l[j]); //show方法
	}

	FILE* log = fopen("log.txt", "wb");   //文件写入
	for (int i = 0; i < 2; i++) {
		if (l[i].Name != "NULL") {
			fwrite(&l[i], sizeof(List), 1, log);
		}
	}
	fclose(log);

	log = fopen("log.txt", "rb");
	for (int i = 0; i < 2; i++) {
		fread(&l[i], sizeof(List), 1, log); // 读1个结构
	}
	fclose(log);
	system("pause");
	return 0;
}