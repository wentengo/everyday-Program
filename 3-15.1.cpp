#include <iostream>
#include <vector>
using namespace std;

class LCA {
public:
	int getLCA(int a, int b) {
		vector<int> v1, v2;
		while (a){
			v1.push_back(a);
			a /= 2;
		}
		while (b){
			v2.push_back(b);
			b /= 2;
		}
		v1.push_back(0);
		v2.push_back(0);
		for (size_t i = 0; i < v1.size(); ++i){
			for (size_t j = 0; j < v2.size(); ++j){
				if (v1[i] == v2[j])
					return v1[i];
			}
		}
		return -1;
		// write code here
	}
};

int main()
{
	LCA a;
	cout<<a.getLCA(1, 2);
	return 0;
}