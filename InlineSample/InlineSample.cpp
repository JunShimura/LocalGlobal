#include <iostream>
#include <string>
using namespace std;

inline int pow(int a ) {
	int ans = a*a;
	return ans;
}

int main()
{
	int x;
	int ans;
	//1回目
	cout << "値を入力：";
	cin >> x;
	ans = pow(x);
	cout << "x^2=" << ans << endl;

	//2回目
	cout << "値を入力：";
	cin >> x;
	ans = pow(x);
	cout << "x^2=" << ans << endl;
	return 0;
}
