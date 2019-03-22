#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool Strcmp(string v1, string v2)
{
	if (v1 < v2)
		return true;
	return false;
}

bool Strlen(string v1, string v2)
{
	if (v1.size() < v2.size())
		return true;
	return false;
}

void Stor(vector<string> v)
{
	bool x = true, y = true;
	for (size_t i = 0; i < v.size() - 1; ++i){
		if (x)
			x = Strcmp(v[i], v[i + 1]);
		if (y)
			y = Strlen(v[i], v[i + 1]);
		if (!x&&!y){
			cout << "none" << endl;
			return;
		}
	}
	if (x&&y)
		cout << "both" << endl;
	else if (x)
		cout << "lexicographically" << endl;
	else if (y)
		cout << "lengths" << endl;
}

int main()
{
	int n;
	cin >> n;
	string s;
	vector<string> v;
	for (int i = 0; i < n; ++i){
		cin >> s;
		v.push_back(s);
	}
	Stor(v);
	return 0;
}