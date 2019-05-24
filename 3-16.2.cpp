#include <iostream>
#include <string>
#include <vector>
using namespace std;

int getCommonStrLength(string pFirstStr, string pSecondStr){
	int max = 0;
	int l1 = pFirstStr.size(), l2 = pSecondStr.size();
	vector<vector<int>> vv(l1, vector<int>(l2, 0));
	for (int i = 0; i < l1; ++i){
		for (int j = 0; j < l2; j++){
			if (pFirstStr[i] == pSecondStr[j]){
				if (i >= 1 && j >= 1)
					vv[i][j] = vv[i - 1][j - 1] + 1;
				else
					vv[i][j] = 1;
			}
			if (vv[i][j]>max)
				max = vv[i][j];
		}
	}
	return max;
}

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2){
		cout << getCommonStrLength(s1, s2) << endl;
	}
	return 0;
}