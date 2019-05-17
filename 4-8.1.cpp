#include <iostream>
using namespace std;

int mday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int sday1[7] = { 2, 1, 0, 6, 5, 4, 3 };
int sday4[7] = { 5, 4, 3, 2, 1, 0, 6 };

int MYear(int year){
	if ((year % 100 != 0 && year % 4 == 0) || (year % 100 == 0 && year % 400 == 0)){
		mday[2] = 29;
		return 366;
	}
	mday[2] = 28;
	return 365;
}

void Func(int year){
	int day = 1, sum = 0;
	for (int i = 2000; i < year; ++i){
		sum += MYear(i);
	}
	MYear(year);
	for (int i = 1; i <= 12; ++i){
		if (i == 1){
			printf("%d-%0.2d-%0.2d\n", year, i, 1);
			day = 15 + sday1[sum % 7];
			printf("%d-%0.2d-%0.2d\n", year, i, day);
		}
		else if (i == 2){
			sum += mday[1];
			day = 15 + sday1[sum % 7];
			printf("%d-%0.2d-%0.2d\n", year, i, day);
		}
		else if (i == 5){
			sum += mday[2] + mday[3] + mday[4];
			day = 1 + sday1[sum % 7];
			for (int j = 0; day < 25; j++){
				day += 7;
			}
			printf("%d-%0.2d-%0.2d\n", year, i, day);
		}
		else if (i == 7){
			sum += mday[5] + mday[6];
			printf("%d-%0.2d-%0.2d\n", year, i, 4);
		}
		else if (i == 9){
			sum += mday[7] + mday[8];
			day = 1 + sday1[sum % 7];
			printf("%d-%0.2d-%0.2d\n", year, i, day);
		}
		else if (i == 11){
			sum += mday[9] + mday[10];
			day = 22 + sday4[sum % 7];
			printf("%d-%0.2d-%0.2d\n", year, i, day);
		}
		else if (i == 12){
			printf("%d-%0.2d-%0.2d\n", year, i, 25);
		}
	}
}

int main(){
	int year;
	while (cin >> year){
		Func(year);
		cout << endl;
	}
	return 0;
}