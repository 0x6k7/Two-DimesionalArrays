#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::cout;
using std::string;
using std::ofstream;

int main() {
	const char NEW_LINE = '\n';
	const int ARR_ROW = 2;
	const int ARR_COL = 5;

	int arrayofarrays[ARR_ROW][ARR_COL]{};

	cout << "Enter random numbers:" << NEW_LINE;
	int number1;
	cin >> number1;

	cout << "Enter random numbers:" << NEW_LINE;
	int number2;
	cin >> number2;

	cout << "Enter random numbers:" << NEW_LINE;
	int number3;
	cin >> number3;

	for (int i = 0; i < ARR_ROW; i++) {
		for (int x = 0; x < ARR_COL; x++) {
			arrayofarrays[i][x] = number1;
		}

		for (int x = 1; x < ARR_COL; x++) {
			arrayofarrays[i][x] = number2;
		}

		for (int x = 2; x < ARR_COL; x++) {
			arrayofarrays[i][x] = number3;
		}
	}

	for (int i = 0; i < ARR_ROW; i++) {
		for (int x = 0; x < ARR_COL; x++) {
			cout << arrayofarrays[i][x] << "\t";
		}
		cout << NEW_LINE;
	}



	//cout << arrayofarrays << NEW_LINE;
}