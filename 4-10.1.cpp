#include <iostream>
#include <string>
using namespace std;

int Func(string s1, string s2){
	if (s1.empty() || s2.empty() || s2.size() > s1.size())
		return 0;
	int sum = 0;
	for (size_t i = 0; i < s1.size(); ++i){
		size_t k = i, j = 0;
		for (; j < s2.size(); ++j){
			if (s1[k] == s2[j]){
				++k;
			}
			else
				break;
		}
		if (j == s2.size()){
			sum++;
			i += s2.size() - 1;
		}
	}
	return sum;
}

int main(){
	string s1, s2;
	while (cin >> s1 >> s2){
		cout << Func(s1, s2) << endl;
	}
	return 0;
}