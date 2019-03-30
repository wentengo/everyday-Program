#include<iostream>
#include <vector>
using namespace std;
class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		if (n == 0){
			return 0;
		}
		int count = 1;
		int tmp = gifts[0];
		for (int i = 1; i < n; ++i){
			if (gifts[i] == tmp)
				count++;
			else{
				count--;
				if (count == 0){
					tmp = gifts[i];
					//count = 1;
				}
			}
		}
		/*if (count > 0)
			return tmp;*/
		int num = 0;
		for (int i = 0; i < n; ++i){
			if (gifts[i] == tmp)
				num++;
		}
		if (num>n / 2)
			return tmp;
		return 0;
		// write code here
	}
};
int main()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);

	Gift a;
	cout << a.getValue(v, v.size()) << endl;
	return 0;
}