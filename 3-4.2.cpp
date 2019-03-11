#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2, s;
	getline(cin, s1);
	getline(cin, s2);
	/*int array[256] = { 0 };
	for (size_t i = 0; i < s2.size(); ++i){
		array[s2[i]]++;
	}
	for (size_t i = 0; i < s1.size(); ++i){
		if (array[s1[i]] == 0)
			s += s1[i];
	}
	cout << s << endl;*/
	for (size_t i = 0; i < s1.size(); ++i){
		if (s2.find(s1[i]) == -1){
			cout << s1[i];
		}
	}
	return 0;
}