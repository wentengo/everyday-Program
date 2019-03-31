#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string s, ss;
	getline(cin, s);
	vector<string> v;
	int x = 0;
	bool flag = false;
	for (size_t i = 0; i < s.size(); ++i){
		if (s[i] == '"'){
			if (!flag){
				flag = true;
			}
			else{
				v.push_back(ss);
				flag = false;
			}
		}
		else if (s[i] == ' '){
			if (flag)
				ss += s[i];
			else{
				v.push_back(ss);
				ss.clear();
			}
		}
		else
			ss += s[i];
	}
	if (s.size() != 0)
		v.push_back(ss);
	cout << v.size() << endl;
	for (size_t i = 0; i < v.size(); ++i){
		cout << v[i] << endl;
	}
	return 0;
}