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
	//1���
	cout << "�l����́F";
	cin >> x;
	ans = pow(x);
	cout << "x^2=" << ans << endl;

	//2���
	cout << "�l����́F";
	cin >> x;
	ans = pow(x);
	cout << "x^2=" << ans << endl;
	return 0;
}
