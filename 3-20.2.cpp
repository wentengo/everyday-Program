#include <iostream>
#include <vector>
using namespace std;
class Gloves {
public:
	int findMinimum(int n, vector<int> left, vector<int> right) {
		int lsum = 0, lmin = INT_MAX, rsum = 0, rmin = INT_MAX, sum = 0;
		for (int i = 0; i < n; ++i){
			if (left[i] * right[i] == 0)
				sum += left[i] + right[i];
			else{
				lsum += left[i];
				rsum += right[i];
				if (lmin>left[i])
					lmin = left[i];
				if (rmin > right[i])
					rmin = right[i];
			}
		}
		return sum + (lsum - lmin < rsum - rmin ? lsum - lmin : rsum - rmin) + 2;
		// write code here
	}
};
int main()
{
	int n;
	cin >> n;
	vector<int>left, right;
	int x, y;
	for (int i = 0; i < n; ++i){
		cin >> x >> y;
		left.push_back(x);
		right.push_back(y);
	}
	Gloves a;
	cout << a.findMinimum(n, left, right) << endl;
	return 0;
}