#include <iostream>
using namespace std;

int getTotalCunt(int mon){
	if (mon == 1 || mon == 2)
		return 1;
	int m1 = 1, m2 = 1;
	while ((mon--) - 2 != 0){
		m2 += m1;
		m1 = m2 - m1;
	}
	return m2;
}

int main(){
	int month;
	while (cin >> month){
		cout << getTotalCunt(month) << endl;
	}
	return 0;
}