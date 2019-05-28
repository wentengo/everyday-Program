#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	while (getline(cin, s)){
		if (s.find("joker JOKER") != -1){
			cout << "joker JOKER" << endl;
		}
		else if (s.find("JOKER joker") != -1){
			cout << "JOKER joker" << endl;
		}
		else{
			int flag = s.find("-");
			string s1 = s.substr(0, flag);
			string s2 = s.substr(flag + 1);
			int n1 = count(s1.begin(), s1.end(), ' ');
			int n2 = count(s2.begin(), s2.end(), ' ');
			string str = "345678910JQKA2jokerJOKER";
			if (n1 == n2){
				int flag1 = str.find(s1[0]);
				int flag2 = str.find(s2[0]);
				if (flag1 > flag2){
					cout << s1 << endl;
				}
				else{
					cout << s2 << endl;
				}
			}
			else{
				if (n1 == 3)
					cout << s1 << endl;
				else if (n2 == 3)
					cout << s2 << endl;
				else
					cout << "ERROR" << endl;
			}
		}
	}
	return 0;
}