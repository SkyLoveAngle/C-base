#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//�궨��������������
#define MAX_ROW 3
#define MAX_COL 3

void init(char chessBoard[MAX_ROW][MAX_COL]) {
	// �������е�ÿ��Ԫ�ض���=��ʼ��Ϊ���ո񡱡�
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			chessBoard[row][col] = ' ';
		}
	}
}

void printChessBoard(char chessBoard[MAX_ROW][MAX_COL]) {
	//�����̴�ӡ������
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++) {
		printf("| %c | %c | %c |\n", chessBoard[row][0],
			chessBoard[row][1], chessBoard[row][2]);
		printf("+---+---+---+\n");
	}
}

void playerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	// ���������. ͨ������̨������������ķ�ʽ��ʵ�֡�
	while (1) {
		printf(" �������������(row col): ");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		// У���������������Ƿ�Ϸ�(�Ƿ������̺���Χ��)��
		if (row < 0 || row >= MAX_ROW
			|| col < 0 || col >= MAX_COL) {
			// �����ַǷ��������ʱӦ��������������롣
			printf("�������겻�ںϷ���Χ[0, 2]�� \n");
			continue;
		}
		// У���������λ���Ƿ��Ѿ������ˡ� 
		if (chessBoard[row][col] != ' ') {
			printf("��������λ���Ѿ�������!\n");
			continue;
		}
		// �������ӡ��á�X����ʾ������ӡ�
		chessBoard[row][col] = 'x';
		break;
	}
}


void computerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	// �������ӣ��õ����������һ���������ꡣ
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			// ��Ҫ��֤������������Ѿ����ӵ�λ��. 
			continue;
		}
		//�á�O����ʾ�������ӡ�
		chessBoard[row][col] = 'o';
		break;
	}
}

int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
	// �ҿո�. ����Ҳ���, ��������
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ') {
				// ����ҵ� �ո� ˵��û��
				return 0;
			}
		}
	}
	return 1;
}


char isWin(char chessBoard[MAX_ROW][MAX_COL]) {
	// �ж����е��С�
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}
	// �ж����е��С�
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	// �ж������Խ��ߡ�
	if (chessBoard[0][0] != ' '
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[2][0] != ' '
		&& chessBoard[2][0] == chessBoard[1][1]
		&& chessBoard[2][0] == chessBoard[0][2]) {
		return chessBoard[2][0];
	}
	// �ж��Ƿ���塣���������Ƿ���ʣ��ռ䡣
	if (isFull(chessBoard)) {//������isFull������
		return 'q';
	}
	return ' ';
}


void game() {
	// 1. �������̲���ʼ��
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	init(chessBoard);//���ó�ʼ������
	char winner = ' ';
	while (1) {
		// 2. ��ӡ����
		printChessBoard(chessBoard);
		// 3. �������(���������������ķ�ʽ������)
		playerMove(chessBoard);
		// 4. �ж�ʤ����ϵ
		winner = isWin(chessBoard);
		if (winner != ' ') {
			break;
		}
		// 5. ��������(���λ������) 
		computerMove(chessBoard);
		// 6. �ж�ʤ����ϵ
		winner = isWin(chessBoard);
		if (winner != ' ') {
			break;
		}
	}
	printChessBoard(chessBoard);
	if (winner == 'x') {
		printf("��ϲ��, ��Ӯ��!\n");
	}
	else if (winner == 'o') {
		printf("���ź�, ������!�ٽ�������\n");
	}
	else {
		printf("�������֣���һ����ƽ��!\n");
	}
}



int menu() {
	printf("====================\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("====================\n");
	printf(" ����������ѡ��: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main() {
	srand(time(0));
	while (1) {
		int choice = menu();
		if (choice == 1) {
			game();//�˴�������һ��game����
		}
		else if (choice == 0) {
			printf("goodbye!\n");
			break;
		}
	}
	system("pause");
	return 0;
}