#include <iostream>
#include <string>
using namespace std;

string Find(string s1, string s2){
	string s, ss;
	if (s1.size() > s2.size())
		s1.swap(s2);
	for (size_t i = 0; i < s1.size(); ++i){
		size_t k = i;
		for (size_t j = 0; j < s2.size(); ++j){
			if (k == s1.size())
				return s;
			if (s1[k] == s2[j]){
				ss += s1[k];
				k++;
			}
			else{
				ss.clear();
				k = i;
			}
			if (ss.size()>s.size())
				s = ss;
		}
	}
	return s;
}

int main(){
	string s1, s2;
	while (cin >> s1 >> s2){
		cout << Find(s1, s2) << endl;
	}
	return 0;
}