#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Func(vector<string>& v, string s){
	bool flag = false;
	string str;
	for (size_t i = 0; i < s.size(); ++i){
		if (flag){
			if (s[i] == '\"'){
				flag = false;
				v.push_back(str);
				str.clear();
			}
			else{
				str += s[i];
			}
		}
		else{
			if (s[i] == ','){
				v.push_back(str);
				str.clear();
			}
			else if (i == s.size() - 1){
				str += s[i];
				v.push_back(str);
				str.clear();
			}
			else if (s[i] == '\"'){
				flag = true;
			}
			else{
				str += s[i];
			}
		}
	}
}

void Find(vector<string> v, string s2){
	for (size_t i = 0; i < v.size(); ++i){
		if (v[i] == s2){
			cout << "Ignore" << endl;
			return;
		}
	}
	cout << "Important!" << endl;
}

int main(){
	string s;
	vector<string> v;
	bool flag = false;
	while (getline(cin, s)){
		if (flag){
			flag = false;
			Find(v, s);
			v.clear();
		}
		else{
			flag = true;
			Func(v, s);
		}
		s.clear();
	}
	return 0;
}