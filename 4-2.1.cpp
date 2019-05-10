#include<iostream>
#include<vector>
using namespace std;

int Func(int x){
	vector<int> v(10001);
	v[0] = 1;
	v[1] = 1;
	for (int i = 2; i <= x; ++i){
		v[i] = v[i - 1] + v[i - 2];
		if (v[i] >= 10000)
			v[i] %= 10000;
	}
	return v[x];
}

int main(){
	int n;
	while (cin >> n){
		while (n--){
			int x;
			cin >> x;
			printf("%04d", Func(x));
		}
		cout << endl;
	}
	return 0;
}
//6 18 15 21 13 25 27 5 1 10 100 1000 10000