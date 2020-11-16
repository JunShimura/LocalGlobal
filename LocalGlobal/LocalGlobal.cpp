#include <iostream>
//// グローバル変数
//int score = 0;
//
//void Player() {
//	//プレイヤーの処理
//	if (        ) {
//		score += 10;
//	}
//}
//void Enemy() {
//	//敵の処理
//	if (        ) {
//		score += 10;
//	}
//}
//void Bullet() {
//	// 弾の処理
//	if () {
//		score += 10;
//	}
//}



int a = 0, b = 1;
void FuncB(int x, int y);
void FuncC(int x, int y);
void FuncA(int x,int y) {
	//xとyはこの関数内のローカル変数
	static int player_x=0,player_y=0;	// ローカルのstatic
	player_x += x;
	player_y += y;
	FuncB(x,y);
}
void FuncB(int x, int y) {
	//xとyはこの関数内のローカル変数
	int b;
}
void FuncC(int x, int y) {
	//xとyはこの関数内のローカル変数
	int c;
}
int main() {
	//main内のローカル変数
	int  i = 0, j = 0;
	int integral = 1;
	for (i = 1; i < 10; i++)
	{
		int t = i % 2;
		if (t == 0) {	//偶数だけ処理する
			integral *= i;
		}
	}
	::a = 3;	//グローバルを参照
	a = -2;	//　ローカルを参照
}