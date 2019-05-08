
#include<iostream>
using namespace std;

void TopRows(int N, int rowNumber) {	//cout top N/2 rows of single M char
	for (int dash = 0; dash < N - rowNumber; dash++) {
		cout << "-";
	}
	for (int star = 0; star < N + (rowNumber * 2); star++) {
		cout << "*";
	}
	for (int dash = 0; dash < N - (rowNumber * 2); dash++) {
		cout << "-";
	}
	for (int star = 0; star < N + (rowNumber * 2); star++) {
		cout << "*";
	}
	for (int dash = 0; dash < N - rowNumber; dash++) {
		cout << "-";
	}
}

void BottomRows(int N, int rowNumber) {		//cout Bottom N/2 rows of single M char
	for (int dash = 0; dash < N - rowNumber; dash++) {
		cout << "-";
	}
	for (int star = 0; star < N; star++) {
		cout << "*";
	}
	for (int dash = 0; dash < (rowNumber * 2) - N; dash++) {
		cout << "-";
	}
	for (int star = 0; star < N + ((N - rowNumber) * 2); star++) {
		cout << "*";
	}
	for (int dash = 0; dash < (rowNumber * 2) - N; dash++) {
		cout << "-";
	}
	for (int star = 0; star < N; star++) {
		cout << "*";
	}
	for (int dash = 0; dash < N - rowNumber; dash++) {
		cout << "-";
	}
}

void MChar(int N, int rowNumber) {		//cout 2 M chars
	if (rowNumber < (N + 1) / 2) {
		TopRows(N, rowNumber);
		TopRows(N, rowNumber);
	}
	else {
		BottomRows(N, rowNumber);
		BottomRows(N, rowNumber);
	}	
}

int main() {
	int N = 0;
	cout<< "Input odd number between 3 and 99999" << endl;
	cin >> N;
	if (N < 3 || N>99999 || N % 2 == 0) {
		cout << "Invalid number! Please input odd number between 3 and 99999" << endl;
	}
	cout << "N = " << N << endl;
	for (int i = 0; i <= N; i++) {
		MChar(N, i);
		cout << endl;
	}

	system("pause");
	return 0;
}