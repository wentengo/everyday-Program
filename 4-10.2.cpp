#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string ADD(string s1, string s2){
	int size1 = s1.size() - 1, size2 = s2.size() - 1, flag = 0;
	string s;
	while (size1 >= 0 || size2 >= 0){
		if (size1 >= 0){
			flag += s1[size1] - '0';
			--size1;
		}
		if (size2 >= 0){
			flag += s2[size2] - '0';
			--size2;
		}
		s += flag % 10 + '0';
		flag /= 10;
	}
	if (flag)
		s += flag + '0';
	reverse(s.begin(), s.end());
	return s;
}

string Func(int begin, int end){
	string sum("0");
	vector<string>v;
	v.push_back("1");
	v.push_back("1");
	for (int i = 2; i < end; ++i){
		v.push_back(ADD(v[i - 1], v[i - 2]));
	}
	for (int i = begin - 1; i < end; ++i){
		sum = ADD(sum, v[i]);
	}
	return sum;
}

int main(){
	int begin, end;
	while (cin >> begin >> end){
		cout << Func(begin, end) << endl;
	}
	return 0;
}