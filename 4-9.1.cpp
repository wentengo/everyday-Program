#include <iostream>
using namespace std;

int money[13] = { 0, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2 };
int numday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

void Func(int year){
	if ((year % 100 != 0 && year % 4 == 0) || (year % 100 == 0 && year % 400 == 0)){
		numday[2] = 29;
	}
	else
		numday[2] = 28;
}

int YearSumMoney(int year, int month1, int day1, int month2, int day2){
	int sum = 0;
	Func(year);
	if (month1 == month2){
		sum += money[month1] * (day2 - day1 + 1);
	}
	else{
		sum += money[month1] * (numday[month1] - day1 + 1);
		for (int i = month1 + 1; i < month2; ++i){
			sum += money[i] * numday[i];
		}
		sum += money[month2] * day2;
	}
	return sum;
}

int SumMoney(int year1, int year2, int month1, int month2, int day1, int day2){
	int sum = 0;
	if (year1 == year2){
		sum += YearSumMoney(year1, month1, day1, month2, day2);
	}
	else{
		sum += YearSumMoney(year1, month1, day1, 12, 31);
		for (int i = year1 + 1; i < year2; ++i){
			sum += YearSumMoney(i, 1, 1, 12, 31);
		}
		sum += YearSumMoney(year2, 1, 1, month2, day2);
	}
	return sum;
}

int main(){
	int year1, year2, month1, month2, day1, day2;
	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2){
		cout << SumMoney(year1, year2, month1, month2, day1, day2) << endl;
	}
	return 0;
}