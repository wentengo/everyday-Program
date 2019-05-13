#include <iostream>
#include <vector>
using namespace std;

int main()
{
	double a, b, c;
	while (cin >> a >> b >> c){
		vector<double>v(3);
		v[0] = a;
		v[1] = b;
		v[2] = c;
		for (int i = 0; i < 3; ++i){
			for (int j = 0; j + 1 < 3 - i; ++j){
				if (v[j] > v[j + 1])
					swap(v[j], v[j + 1]);
			}
		}
		if (v[2] + v[0]>v[1] && v[2] - v[0] < v[1])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		v.clear();
	}
	return 0;
}