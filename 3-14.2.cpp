#include <iostream>
#include <string>
using namespace std;

int len(string s)
{
	if (s.size() >= 8)
		return 25;
	else if (s.size() >= 5)
		return 10;
	return 5;
}

int aaa(string s){
	bool flag1 = false, flag2 = false;
	int flag3 = -1, flag4 = -1;
	int count = 0;
	for (size_t i = 0; i < s.size(); ++i){
		if (!flag1 && (s[i] >= 'a'&&s[i] <= 'z')){
			flag1 = true;
		}
		else if (!flag2 && (s[i] >= 'A'&&s[i] <= 'Z')){
			flag2 = true;
		}
		else if (flag3 != 2 && (s[i] >= '0' && s[i] <= '9')){
			flag3++;
		}
		else if (flag4 != 2 && ((s[i] >= 33 && s[i] <= 47) || 
			(s[i] >= 58 && s[i] <= 64) || 
			(s[i] >= 91 && s[i] <= 96) || 
			(s[i] >= 123 && s[i] <= 126))){
			flag4++;
		}
	}
	if ((flag1 || flag2) && flag3 >= 0){
		if (flag4 >= 0){
			if (flag1&&flag2){
				count += 5;
			}
			else
				count += 3;
		}
		else{
			count += 2;
		}
	}
	if (flag1 || flag2){
		if (flag1&&flag2){
			count += 20;
		}
		else
			count += 10;
	}
	if (flag3 >= 0){
		if (flag3 == 0){
			count += 10;
		}
		else
			count += 20;
	}
	if (flag4 >= 0){
		if (flag4 == 0){
			count += 10;
		}
		else
			count += 25;
	}
	return count;
}


int main()
{
	string s;
	while (cin >> s){
		int n = len(s) + aaa(s);
		if (n >= 90)
			cout << "VERY_SECURE" << endl;
		else if (n >= 80)
			cout << "SECURE" << endl;
		else if (n >= 70)
			cout << "VERY_STRONG" << endl;
		else if (n >= 60)
			cout << "STRONG" << endl;
		else if (n >= 50)
			cout << "AVERAGE" << endl;
		else if (n >= 25)
			cout << "WEAK" << endl;
		else
			cout << "VERY_WEAK" << endl;
	}
	return 0;
}