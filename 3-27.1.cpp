#include<iostream>
#include<vector>
using namespace std;
void SwapPoke(vector<int>& v, int k){
	while (k--){
		size_t left = 1, right = v.size() / 2;
		while (left < right){
			int tmp = v[right];
			for (size_t i = right; i > left; --i){
				v[i] = v[i - 1];
			}
			v[left] = tmp;
			left += 2;
			right++;
		}
	}
}
int main(){
	vector<int>v;
	int t;
	while (cin >> t){
		for (int i = 0; i < t; i++){
			int n, k, x;
			cin >> n >> k;
			for (int j = 0; j < 2 * n; ++j){
				cin >> x;
				v.push_back(x);
			}
			SwapPoke(v, k);
			for (size_t j = 0; j < v.size(); ++j){
				if (j == v.size() - 1)
					cout << v[j] << endl;
				else
					cout << v[j] << " ";
			}
			v.clear();
		}
	}
	return 0;
}