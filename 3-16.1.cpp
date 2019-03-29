#include <iostream>
using namespace std;
class BinInsert {
public:
	int binInsert(int n, int m, int j, int i) {
		m <<= j;
		n |= m;
		return n;
		// write code here
	}
};
int main()
{
	BinInsert a;
	cout<<a.binInsert(1024, 19, 2, 6);
	return 0;
}