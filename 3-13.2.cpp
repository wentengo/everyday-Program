#include <iostream>
#include <vector>
using namespace std;
int Func(int n, int m){
	if (n > 1 && m > 1)
		return Func(n - 1, m) + Func(n, m - 1);
	else if ((n >= 1 && m == 1) || (n == 1 && m >= 1))
		return n + m;
	else
		return 0;
}
int main()
{
	int n, m;
	while (cin >> n >> m){
		cout << Func(n, m) << endl;
	}
	return 0;
}