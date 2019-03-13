#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	vector<int> v;
	while (cin >> n)
		v.push_back(n);
	int cur = 1;
	int tmp = v[0];
	for (size_t i = 0; i < v.size(); ++i){
		if (v[i] == tmp)
			cur++;
		else
			cur--;
		if (cur == 0){
			tmp = v[i];
			cur++;
		}
	}
	cout << tmp << endl;
	return 0;
}