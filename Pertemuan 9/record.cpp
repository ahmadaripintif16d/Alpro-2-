#include <iostream>
using namespace std;

typedef struct {
	string hari;
	int tgl;
	string bulan;
	int tahun;
} tanggal;

int main () {

	tanggal A;

	cout << "Masukan hari yang anda inginkan = ";
	cin >> A.hari;
	cout << "Masukan tanggal yang anda inginkan = ";
	cin >> A.tgl;
	cout << "Masukan bulan yang anda inginkan = ";
	cin >> A.bulan;
	cout << "Masukan tahun yang anda inginkan = ";
	cin >> A.tahun;

	cout << "Data yang anda masukan adalah hari " << A.hari 
	<< " tanggal " << A.tgl << " bulan " << A.bulan << " tahun " << A.tahun << endl;
	
	return 0;
}
