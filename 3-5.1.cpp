#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, num = 1;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i){
		cin >> v[i];
	}
	for (int i = 1; i < n - 1; ++i){
		if (v[i - 1]<v[i] && v[i]>v[i + 1] || v[i - 1]>v[i] && v[i] < v[i + 1]){
			num++;
			if (i != n - 3)
				i++;
		}
	}
	cout << num << endl;
	return 0;
}