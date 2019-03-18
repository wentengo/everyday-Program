#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int n, x;
	cin >> n;
	while (n--){
		cin >> x;
		v.push_back(x);
	}
	int cur = 0, tmp;
	for (size_t i = 0; i < v.size(); ++i){
		cur += v[i];
		if (cur<v[i]){
			cur = v[i];
		}
		if ((cur>tmp) || (i == 0)){
			tmp = cur;
		}
	}
	cout << tmp << endl;
	return 0;
}