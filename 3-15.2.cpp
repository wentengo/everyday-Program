#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int x;
	while (cin >> x){
		int cur = 0, tmp = 0;
		while (x){
			if (x & 1){
				cur++;
				if (cur > tmp)
					tmp = cur;
			}
			else
				cur = 0;
			x >>= 1;
		}
		cout << tmp << endl;
	}
	return 0;
}