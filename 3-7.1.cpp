#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	int a, b1, b2, c;
	vector<int> v;
	for (int i = 0; i < 4;++i){
		cin >> n;
		v.push_back(n);
	}
	a = (v[0] + v[2]) / 2;
	c = (v[3] - v[1]) / 2;
	b1 = (v[2] - v[0]) / 2;
	b2 = (v[1] + v[3]) / 2;
	if (b1 != b2){
		cout << "No" << endl;
	}
	else{
		cout << a << ' ' << b1 << ' ' << c << endl;
	}
	return 0;
}