#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n){
		int cur = 0;
		while (n != 0){
			if (n & 1){
				++cur;
			}
			n >>= 1;
		}
		cout << cur << endl;
	}
	return 0;
}