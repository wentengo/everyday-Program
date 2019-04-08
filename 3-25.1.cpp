#include <iostream>
#include <vector>
using namespace std;

int Count(int n){
	int flag = 0, num = 0;
	while (n){
		n += flag;
		num += (n / 3);
		flag = n % 3;
		n /= 3;
		if ((n + flag) == 2){
			num++;
			break;
		}
	}
	return num;
}

int main(){
	/*int n, i = 1;
	vector<int> v;
	while (cin >> n){
		if (n == 0 || i == 10){
			if (n != 0)
				v.push_back(n);
			for (size_t j = 0; j < v.size();++j)
				cout << Count(v[j]) << endl;
			cout << endl;
			i = 1;
			v.clear();
		}
		else{
			v.push_back(n);
			++i;
		}
	}*/
	int n;
	while (cin >> n){
		cout << Count(n) << endl;
	}
	return 0;
}