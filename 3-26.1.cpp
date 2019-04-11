#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string Func(string s){
	if (s.empty())
		return s;
	size_t begin = 0, end = s.size() - 1;
	while (begin < end){
		swap(s[begin], s[end]);
		++begin;
		--end;
	}
	return s;
}

int main(){
	string s;
	while (getline(cin, s)){
		//ÀûÓÃ¿âº¯Êý
		//reverse(s.begin(), s.end());
		//cout << s << endl;
		cout << Func(s) << endl;
	}
	return 0;
}