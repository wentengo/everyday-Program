#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	/**
	*	正数数组中的最小不可组成和
	*	输入：正数数组arr
	*	返回：正数数组中的最小不可组成和
	*/
	int getFirstUnFormedNum(vector<int> arr, int len) {
		if (arr.size() == 0)
			return 0;
		vector<int>v;
		v.push_back(arr[0]);
		for (int i = 1; i < len; i++){
			size_t size = v.size();
			v.push_back(arr[i]);
			for (size_t j = 0; j < size; ++j){
				v.push_back(arr[i] + v[j]);
			}
		}
		sort(v.begin(), v.end());
		size_t i = 1;
		for (; i < v.size(); ++i){
			if (v[i] - v[i - 1]>1)
				return v[i - 1] + 1;
		}
		return v[i - 1] + 1;
	}
};

int main(){
	vector<int>v ;
	Solution a;
	cout << a.getFirstUnFormedNum(v, v.size()) << endl;
	return 0;
}