#include <iostream>
using namespace std;

int main () {
	int ukuranX, i=1;
	int s;
	
	cout << "masukan ukuran array: ";
	cin >> ukuranX;
	
	int X [ukuranX];
	
	for (int j=1; j<= ukuranX; j++) {
		cout << "masukan data ke"<< j <<":";
		cin >> X[j];
	}
	cout <<"masukan data yang di cari:";
	cin >> s;
	
	while (i < ukuranX && X[i] !=s)
		i++;
	if (X [i] == s)
		cout << "data di temukan pada elemen ke " << i << endl;
	else
		cout << "data tidak di temukan" <<endl;
	return 0;
}
