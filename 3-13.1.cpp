#include <iostream>
using namespace std;

class UnusualAdd {
public:
	int addAB(int A, int B) {
		int sum = 0, carry = 0;
		while (B != 0){
			sum = A^B;//��������������൱�ڵ�ǰλ��ӣ������ǽ�λ
			carry = (A&B) << 1;//�������������൱�ڵ�ǰλ���֮��Ľ�λ
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