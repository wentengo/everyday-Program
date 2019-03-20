#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int x, y, n = 0;
	cin >> x >> y;
	vector<vector<int>> vv;
	vv.resize(x);
	for (auto& e : vv){
		e.resize(y, 1);
	}
	for (int i = 0; i < x; ++i){
		for (int j = 0; j < y; ++j){
			if (vv[i][j] == 1){
				n++;
				if ((i + 2) < x){
					vv[i + 2][j] = 0;
				}
				if ((j + 2) < y){
					vv[i][j + 2] = 0;
				}
			}
		}
	}
	cout << n << endl;
	return 0;
}