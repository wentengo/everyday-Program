#include <iostream>
#include <string>
using namespace std;

void Func(char c){
	if (c >= 'A'&&c <= 'Z'){
		c -= 5;
		if (c < 'A'){
			c = 'Z' - ('A' - c - 1);
		}
	}
	cout << c;
}

int main(){
	string s;
	while (getline(cin, s)){
		for (size_t i = 0; i < s.size(); ++i){
			Func(s[i]);
		}
		cout << endl;
	}
	return 0;
}