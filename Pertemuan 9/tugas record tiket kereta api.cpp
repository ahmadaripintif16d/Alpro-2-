# include <iostream>
using namespace std;

typedef struct {
string nama;
int no;
string alamat;
int hp;
int umur;
string asal;
string tujuan;
} data;

typedef struct {
int tgl;
string hari;
string bulan;
int tahun;
} tanggal;


typedef struct {
int jam;
int menit;
int detik;
} waktu;

int main () {
data x;
tanggal A;
waktu y;
	cout << " layanan pemesanan tiket kereta api " <<endl;
	cout << "mohon isi data berikut ini " <<endl;
	cout << "==================================" <<endl;
	cout << "nama anda: ";
	cin >>x.nama;
	cout << "no ktp: ";
	cin >>x.no;
	cout << "alamat: ";
	cin >>x.alamat;
	cout << "no hp: ";
	cin >>x.hp;
	cout << "umur: ";
	cin >>x.umur;
	cout << "asal: ";
	cin >>x.asal;
	cout << "tujuan: ";
	cin >>x.tujuan;
	cout << "jam keberangkatan: ";
	cin >>y.jam;
	cout << "menit: ";
	cin >>y.menit;
	cout << "detik: ";
	cin >>y.detik;
	cout << "tanggal: ";
	cin >>A.tgl;
	cout << "hari: ";
	cin >>A.hari;
	cout << "bulan: ";
	cin >>A.bulan;
	cout << "tahun: ";
	cin >>A.tahun;


cout << "=============================" <<endl;
cout << "data yang anda masukan adalah " <<endl;
cout << " nama   : " <<x.nama <<endl;
cout << " no ktp : " <<x.no <<endl;
cout << " alamat : " <<x.alamat <<endl;
cout << " no hp  : " <<x.hp <<endl;
cout << " umur   : " <<x.umur <<endl;
cout << " asal   : " <<x.asal <<endl;
cout << " tujuan : " <<x.tujuan <<endl;
cout << " dengan waktu keberangkatan pada jam :" <<y.jam << " menit :" <<y.menit << " detik :" <<y.detik <<endl; 
cout << " tanggal :" <<A.tgl << " hari " <<A.hari << " bulan " <<A.bulan << " tahun " <<A.tahun <<endl;

return 0;
}
