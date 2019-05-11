#include <iostream>
#include <string>
using namespace std;

int Func(int n){
	if (n < 10)
		return n;
	int tmp = 0;
	while (n){
		tmp += (n % 10);
		n /= 10;
	}
	return Func(tmp);
}

int main(){
	string n;
	while (cin >> n){
		int tmp = 0;
		for (size_t i = 0; i < n.size(); ++i){
			tmp += (n[i] - '0');
		}
		cout << Func(tmp) << endl;
	}
	return 0;
}