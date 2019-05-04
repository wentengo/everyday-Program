#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void PushM(stack<vector<int>>& st, int x, int y){
	vector<int> v;
	v.push_back(x);
	v.push_back(y);
	st.push(v);
	v.clear();
}
void PopM(stack<vector<int>>& st, int& x, int& y){
	st.pop();
	vector<int> v = st.top();
	x = v[0];
	y = v[1];
}
void prin(stack<vector<int>> st){
	if (st.empty())
		return;
	vector<int> v = st.top();
	st.pop();
	prin(st);
	printf("(%d,%d)\n", v[0], v[1]);
}
int main(){
	int x, y;
	while (cin >> x >> y){
		vector<vector<int>> vv;
		vector<int> v;
		int n;
		for (int i = 0; i < x; ++i){
			for (int j = 0; j < y; ++j){
				cin >> n;
				v.push_back(n);
			}
			vv.push_back(v);
			v.clear();
		}
		stack<vector<int>>st;
		int k = 0, j = 0;
		PushM(st, k, j);
		while (!(k == x -1 && j == y -1)){
			vv[k][j] = 2;
			if (k + 1 < x && vv[k + 1][j] == 0)
				PushM(st, ++k, j);
			else if (j + 1 < y && vv[k][j + 1] == 0)
				PushM(st, k, ++j);
			else if (k - 1 >= 0 && vv[k - 1][j] == 0)
				PushM(st, --k, j);
			else if (j - 1 >= 0 && vv[k][j - 1] == 0)
				PushM(st, k, --j);
			else
				PopM(st, k, j);
		}
		prin(st);
	}
	return 0;
}