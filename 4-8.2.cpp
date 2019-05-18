#include <iostream>
#include <vector>
using namespace std;

bool Func(int n){
	for (int i = 2; i <= n / 2; ++i){
		if (n%i == 0)
			return false;
	}
	return true;
}

int main(){
	int n = 0;
	while (cin >> n){
		cout << n << " = ";
		for (int i = 2; i <= n / i; ++i){
			if (n%i == 0 && Func(i)){
				cout << i;
				n /= i;
				i = 1;
				if (n > 1)
					cout << " * ";
				else
					break;
			}
		}
		cout << n << endl;
	}
	return 0;
}