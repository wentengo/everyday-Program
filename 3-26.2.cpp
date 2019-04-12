#include <iostream>
using namespace std;

bool Func(int n){
	for (int i = 2; i < n; i++){
		if (n%i == 0)
			return false;
	}
	return true;
}

int main(){
	int n;
	while (cin >> n){
		int l = 0, r = 0, tmp = 0;
		while (tmp <= (n - tmp)){
			if (Func(tmp) && Func(n - tmp)){
				l = tmp;
				r = n - tmp;
			}
			++tmp;
		}
		cout << l << endl;
		cout << r << endl;
	}
	return 0;
}