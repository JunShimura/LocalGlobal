#include <iostream>
using namespace std;
#include "chapter4.h"

int main() {
  double a, b, c;	// 2���������̌W��
  double x1, x2;	// 2���������̉�
  bool ans;		// �������邩�ǂ���

  // 2���������̌W�����L�[���͂���
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;
  cout << "c = ";
  cin >> c;

  // quadEq�֐����Ăяo��
  ans = quadEq(a, b, c, &x1, &x2);

  if (ans) {
    // ��������Ε\������
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
  }
  else {
    // �����Ȃ��ꍇ
    cout << "���Ȃ��B" << endl;
  }

  return 0;
}
