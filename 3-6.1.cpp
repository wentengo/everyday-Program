#include <iostream>
#include <string>
using namespace std;

int main()
{
	//string s;
	//int tmp = 0, cur = 0, x = -1;
	//cin >> s;
	//for (size_t i = 0; i < s.size(); ++i){
	//	if (s[i] >= '0' && s[i] <= '9'){
	//		cur++;
	//		if (tmp < cur){
	//			tmp = cur;
	//			x = i;
	//		}
	//	}
	//	else{
	//		cur = 0;
	//	}
	//}
	//for (int i = x - tmp + 1; i <= x; ++i){
	//	cout << s[i];
	//}
	//cout << endl;
	string str, res, cur;
	cin >> str;
	for (size_t i = 0; i <= str.size(); ++i){
		if (str[i] >= '0'&&str[i] <= '9'){
			cur += str[i];
		}
		else{
			if (res.size() < cur.size())
				res = cur;
			else
				cur.clear();
		}
	}
	cout << res << endl;
	return 0;
}