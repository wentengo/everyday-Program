#include <iostream>
#include <vector>
using namespace std;

int count(int n){
	int num = 0;
	vector<int> v;
	for (int i = 2; i <= n; ++i){
		v.push_back(1);
		int left = 2, right = i;
		while (left < right){
			if (i % left == 0){
				v.push_back(left);
				right = i / left;
				v.push_back(right);
			}
			left++;
		}

		int sum = 0;
		for (size_t j = 0; j < v.size(); ++j){
			sum += v[j];
		}
		if (sum == i)
			num++;
		v.clear();
	}
	return num;
}

int main(){
	int n;
	while (cin >> n){
		cout << count(n) << endl;
	}
	return 0;
}