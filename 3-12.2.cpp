#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x, y;
	cin >> x;
	cin >> y;
	int i = min(x,y);
	for (; i > 0; --i){
		if ((x%i == 0) && (y%i == 0))
			break;
	}
	cout << ((x / i)*(y / i)*i) << endl;
	return 0;
}