#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	/*string str;
	stack<string> s;
	while (cin >> str){
		s.push(str);
	}
	for (size_t i = 0; i < s.size(); ++i){
		cout << s.top() << " ";
		s.pop();
	}
	cout << s.top() << endl;*/
	string s1, s2;
	cin >> s2;
	while (cin >> s1){
		s2 = s1 + " " + s2;
	}
	cout << s2 << endl;
	return 0;
}