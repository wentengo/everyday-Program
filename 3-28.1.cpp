#include <iostream>
#include <vector>
using namespace std;
int Find(int x, int y){
	for (int i = x; i > 0; --i){
		if (x%i == 0 && y%i == 0)
			return i;
	}
	return 1;
}
void Bate(vector<int> v, int& a){
	for (size_t i = 0; i < v.size(); ++i){
		if (v[i] <= a)
			a += v[i];
		else
			a += Find(a, v[i]);
	}
}
int main(){
	int n, a;
	vector<int>v;
	while (cin >> n >> a){
		int x;
		while(n--){
			cin >> x;
			v.push_back(x);
		}
		Bate(v, a);
		cout << a << endl;
		v.clear();
	}
	return 0;
}