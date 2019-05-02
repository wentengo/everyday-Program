#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	string s;
	while (cin >> s){
		vector<long> v(256, 0);
		for (size_t i = 0; i < s.size(); ++i)
			v[s[i]]++;
		size_t i = 0;
		for (; i < s.size(); ++i){
			if (v[s[i]] == 1){
				cout << s[i] << endl;
				break;
			}
		}
		if (i == s.size()){
			cout << -1 << endl;
		}
		v.clear();
	}
	return 0;
}