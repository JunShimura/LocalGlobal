#include <iostream>
int main() {
	int a[] = { 32,10 };
	int* p1;	//�@int�^�̃|�C���^
	int* p2;	//�@int�^�̃|�C���^
	p1 = &a[0];	//�@�A�h���X�̑��
	p2 = p1+1;
	*p1 = *p1 + *p2;	// �Q��
	std::cout << *p1;
	int i;
	int s = 0;
	for (i = 0; i <= 2; i++) {
		s += a[i];
	}
	std::cout << s;
	return 0;
}