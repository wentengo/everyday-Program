#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string Add(string s1, string s2){
	string s;
	int i = s1.size() - 1, j = s2.size() - 1;
	int flag = 0;
	while (i >= 0 || j >= 0){
		if (i >= 0)
			flag += (s1[i] - '0');
		if (j >= 0)
			flag += (s2[j] - '0');
		s += flag % 10 + '0';
		flag /= 10;
		--i;
		--j;
	}
	if (flag)
		s += flag + '0';
	reverse(s.begin(),s.end());
	return s;
}

int main(){
	string s1, s2;
	while (cin >> s1 >> s2){
		cout << Add(s1, s2) << endl;
	}
	return 0;
}