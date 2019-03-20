#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		stack<char> s;
		for (size_t i = 0; i < A.size(); ++i) {
			if (A[i] == '(') {
				s.push(A[i]);
			}
			else if (A[i] == ')') {
				if (s.empty())
					return false;
				else
					s.pop();
			}
			else {
				return false;
			}
		}
		if (s.empty())
			return true;
		return false;
		// write code here
	}
};
int main()
{
	string s;
	s += "()(()()";
	Parenthesis a;
	cout<<a.chkParenthesis(s, s.size());
	return 0;
}