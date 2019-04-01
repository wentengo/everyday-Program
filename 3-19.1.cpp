#include <iostream>
using namespace std;
int mon[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
class Date
{
public:
	Date(int year, int month, int day)
		:_year(year)
		, _month(month)
		, _day(day)
	{}
	bool func1(){
		return (((_year % 4 == 0) && (_year % 100 != 0)) || (_year % 400 == 0));
	}
	bool func2(){
		if (_month<1 || _month>12)
			return true;
		else{
			if (_day<1 || _day>mon[_month])
				return true;
		}
		return false;
	}
	int outDay(){
		if (func1())
			mon[2] = 29;
		else
			mon[2] = 28;
		if (func2())
			return -1;
		int n = mon[0];
		for (int i = 1; i < _month; ++i){
			n += mon[i];
		}
		n += _day;
		return n;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	int y, m, d;
	while (cin >> y >> m >> d)
	{
		Date date(y, m, d);
		cout << date.outDay() << endl;
	}
	return 0;
}