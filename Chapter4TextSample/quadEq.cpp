#include <iostream>
using namespace std;

bool quadEq(double a, double b, double c, double *px1, double *px2) {
  double inRoot;	// �����̕������̒��̒l
  bool ans;		// �������邩�ǂ���

  // �����̕������̒��̒l�����߂�
  inRoot = b * b - 4 * a * c;

  if (inRoot < 0) {
    // �����������̕������̒��̒l���}�C�i�X�Ȃ���Ȃ�
    ans = false;
  }
  else {
    // �����łȂ���Ή�����
    ans = true;

    // 2�̉���px1��px2���w�������Ă���ϐ��Ɋi�[����
    *px1 = (-b + sqrt(inRoot)) / (2 * a);
    *px2 = (-b - sqrt(inRoot)) / (2 * a);
  }

  // �֐��̖߂�l�ŁA�������邩�ǂ�����Ԃ�
  return ans;
}
