#include <iostream>
//// �O���[�o���ϐ�
//int score = 0;
//
//void Player() {
//	//�v���C���[�̏���
//	if (        ) {
//		score += 10;
//	}
//}
//void Enemy() {
//	//�G�̏���
//	if (        ) {
//		score += 10;
//	}
//}
//void Bullet() {
//	// �e�̏���
//	if () {
//		score += 10;
//	}
//}



int a = 0, b = 1;
void FuncB(int x, int y);
void FuncC(int x, int y);
void FuncA(int x,int y) {
	//x��y�͂��̊֐����̃��[�J���ϐ�
	static int player_x=0,player_y=0;	// ���[�J����static
	player_x += x;
	player_y += y;
	FuncB(x,y);
}
void FuncB(int x, int y) {
	//x��y�͂��̊֐����̃��[�J���ϐ�
	int b;
}
void FuncC(int x, int y) {
	//x��y�͂��̊֐����̃��[�J���ϐ�
	int c;
}
int main() {
	//main���̃��[�J���ϐ�
	int  i = 0, j = 0;
	int integral = 1;
	for (i = 1; i < 10; i++)
	{
		int t = i % 2;
		if (t == 0) {	//����������������
			integral *= i;
		}
	}
	::a = 3;	//�O���[�o�����Q��
	a = -2;	//�@���[�J�����Q��
}