#include <iostream>
#include <vector>
using namespace std;

int Array(int n){
	if (n == 0 || n == 1)
		return -1;
	vector<vector<int>> vv(n);
	vv[0].push_back(1);
	for (int i = 1; i < n; ++i){
		for (int j = 0; j < (2 * i + 1); ++j){
			int sum = 0;
			if (j >= 0 && j < vv[i - 1].size()){
				sum += vv[i - 1][j];
			}
			if ((j - 1) >= 0 && (j - 1) < vv[i - 1].size()){
				sum += vv[i - 1][j - 1];
			}
			if ((j - 2) >= 0 && (j - 2) < vv[i - 1].size()){
				sum += vv[i - 1][j - 2];
			}
			vv[i].push_back(sum);
		}
	}
	for (size_t i = 0; i < vv[n - 1].size(); ++i){
		if (vv[n - 1][i] % 2 == 0)
			return i + 1;
	}
	return -1;
}

int main(){
	int n;
	while (cin >> n){
		cout << Array(n) << endl;
	}
	return 0;
}