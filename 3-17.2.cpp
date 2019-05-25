#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void gcd(int num, vector<int> &v){
	int i;
	for (i = 2; i*i < num; ++i){
		if (num%i == 0){
			v.push_back(i);
			v.push_back(num / i);
		}
	}
	if (i*i == num)
		v.push_back(i);
}

int Func(int n, int m){
	vector<int> v(m + 1, 0);
	v[n] = 1;
	for (int i = n; i < m; ++i){
		vector<int> vv;
		if (v[i] == 0)
			continue;
		gcd(i, vv);
		for (int j = 0; j < vv.size(); j++){
			if ((vv[j] + i) <= m){
				if (v[vv[j] + i] != 0)
					v[vv[j] + i] = min(v[vv[j] + i], v[i] + 1);
				else
					v[vv[j] + i] = v[i] + 1;
			}
		}
	}
	if (v[m] == 0)
		return -1;
	return v[m] - 1;
}

int main(){
	int n, m;
	while (cin >> n >> m){
		cout << Func(n, m) << endl;
	}
	return 0;
}