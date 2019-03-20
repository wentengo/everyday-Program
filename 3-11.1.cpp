#include <iostream>
#include <vector>
using namespace std;

int Fibonacci(int n)
{
	if (n == 0 || n == 1)
		return 0;
	int i = 1;
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	do{
		++i;
		int x = v[i - 1] + v[i - 2];
		v.push_back(x);
	} while (n > v[i]);
	return (v[i] - n)>(n - v[i - 1]) ? (n - v[i - 1]) : (v[i] - n);
}

int main()
{
	int n;
	cin >> n;
	cout << Fibonacci(n) << endl;
	return 0;
}