
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int  n;
	cin >> n;
	long sum = 0;
	vector<int> a(3 * n);
	for (int i = 0; i < 3 * n; ++i){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 3 * n - 2; i >= n; i -= 2){
		sum += a[i];
	}
	cout << sum << endl;
	return 0;
}