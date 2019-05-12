#include <iostream>
using namespace std;

class Solution {
public:
	int Add(int num1, int num2)
	{
		/*int tmp = num1&num2;
		num1 ^= num2;
		while (tmp){
		tmp <<= 1;
		num2 = num1;
		num1 ^= tmp;
		tmp &= num2;
		}
		return num1;*/
		int tmp = num2;
		num2 &= num1;
		num1 ^= tmp;
		while (num2){
			num2 <<= 1;
			tmp = num1;
			num1 ^= num2;
			num2 &= tmp;
		}
		return num1;
	}
};

int main()
{
	int x, y;
	Solution a;
	while (cin >> x >> y){
		cout << a.Add(x, y) << endl;
	}
	return 0;
}