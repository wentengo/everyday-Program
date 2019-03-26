#include <iostream>
#include <vector>
using namespace std;

class Board {
public:
	bool checkWon(vector<vector<int> > board) {
		if ((board[0][0] == 1 && board[0][1] == 1 && board[0][2] == 1) ||
			(board[0][0] == 1 && board[1][0] == 1 && board[2][0] == 1) ||
			(board[1][0] == 1 && board[1][1] == 1 && board[1][2] == 1) ||
			(board[0][1] == 1 && board[1][1] == 1 && board[2][1] == 1) ||
			(board[0][2] == 1 && board[1][2] == 1 && board[2][2] == 1) ||
			(board[2][0] == 1 && board[2][1] == 1 && board[2][2] == 1) ||
			(board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1) ||
			(board[0][2] == 1 && board[1][1] == 1 && board[2][0] == 1))
			return true;
		return false;
		// write code here
	}
};

int main()
{
	Board a;
	int array[3][3] = {
		1, 0, 1, 1, -1, -1, 1, -1, 0
	};
	vector<int> v(3);
	vector<vector<int>>vv;
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			v[j] = array[i][j];
		}
		vv.push_back(v);
	}
	cout << a.checkWon(vv) << endl;
	return 0;
}