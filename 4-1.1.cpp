#include <iostream>
using namespace std;

class Solution {
public:
	int jumpFloorII(int number) {
		if (number == 1)
			return 1;
		int tmp = 1;
		for (int i = 1; i < number; ++i){
			tmp += jumpFloorII(number - i);
		}
		return tmp;
	}
};
int main()
{
	Solution a;
	int x;
	while (cin >> x){
		cout << a.jumpFloorII(x) << endl;
		cout << endl;
	}
	return 0;
}