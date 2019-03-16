#include <iostream>
#include <string>
using namespace std;

bool aaa(string &s,int left,int right){
	while (right > left){
		if (s[right] == s[left]){
			right--;
			left++;
		}
		else
			return false;
	}
	return true;
}

int main()
{
	string s1, s2, s;
	cin >> s1;
	cin >> s2;
	int n = 0;
	for (size_t i = 0; i < s1.size(); ++i){
		s = s1;
		s.insert(i, s2);
		if (aaa(s, 0, s.size() - 1)){
			n++;
		}
	}
	s1 += s2;
	if (aaa(s1, 0, s1.size() - 1)){
		n++;
	}
	cout << n << endl;
	return 0;
}