#include <iostream>
using namespace std;

class UnusualAdd {
public:
	int addAB(int A, int B) {
		int sum = 0, carry = 0;
		while (B != 0){
			sum = A^B;//二进制异或运算相当于当前位相加，不考虑进位
			carry = (A&B) << 1;//二进制与运算相当于当前位相加之后的进位
			A = sum;
			B = carry;
		}
		return sum;
		// write code here
	}
};

int main()
{
	int x, y;
	cin >> x;
	cin >> y;
	UnusualAdd a;
	cout << a.addAB(x, y) << endl;
	return 0;
}