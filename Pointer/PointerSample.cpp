#include <iostream>
int main() {
	int a[] = { 32,10 };
	int* p1;	//　int型のポインタ
	int* p2;	//　int型のポインタ
	p1 = &a[0];	//　アドレスの代入
	size_t sz = sizeof(a[0]);
	p2 = p1+1;
	*p1 = *p1 + *p2;	// 参照
	std::cout << *p1;
	int i;
	int s = 0;
	for (i = 0; i <= 2; i++) {
		s += a[i];
	}
	std::cout << s;
	return 0;
}