#include <iostream>
using namespace std;

// Buat Fungsi untuk validasi nilai ip 
float isWithinRange(float x){ 
	if (x >= 0.00 && x <= 4.00){ // Baca nilai X dari inputan ke fungsi ini, jika kondisinya sesuai maka mengembalikan nilai true / benar
		return true;
	}else {	 					// Jika Salah mengembalikan nilai False 
		return false; 
	}
}

int main(){
	
	// Deklarasi Variabel
	float ip, ips, avg; 	// Float adalah tipe data untuk data angka dengan koma. 
	int jml_m = 0, jml_l = 0, jml_tl = 0; // INT adalah tipe data untuk data angka tanpa koma.
	
	// Text yang ditampilkan di header
	cout << "----------------------------------------"<<endl;
	cout << "Pendataan Nilai IP Mahasiswa "<<endl;
	cout << "Data IP harus di antara 0.00 - 4.00"<<endl;
	cout << "----------------------------------------"<<endl;

	// penggunaan do while looping
	do {
		cout << "Masukan IP Mahasiswa 		: ";
		cin >> ip;
		// Cek validasi IP menggunakan fungsi yang sudah dibuat
		if(isWithinRange(ip)){ //Gunakan fungsi yang sudah kita buat untuk menentukan ke-valid an IP yang di input
			jml_m += 1;	// Menambah Jumlah hitungan mahasiswa dari yang awalnya 0. bertambah 1 setiap fungsi mengembalikan true
			if (ip >= 2.75){ //mengecek nilai IP yang valid tadi, apakah dinyatakan lulus(melebihi parameter) atau tidak(tidak melebihi paramater
				ips += ip; // ips adalah variabel untuk menyimpan nilai keseluruhan, disini, ips lama akan di tambah dengan ip baru
				jml_l += 1;
			}else{
				ips += ip;
				jml_tl += 1;
			}
		// jika tidak valid, jangan lakukan apapun
		}else {
		}
	}while( ip != -999); //jika inputan memasukan angka -999, maka do while berhenti, dan melanjutkan ke bawah
	cout << "----------------------------------------"<<endl;
	cout << "Jumlah Mahasiswa di input 	: "<<jml_m<<endl;
	cout << "Jumlah Mahasiswa Lulus 		: "<<jml_l<<endl;
	cout << "Jumlah Mahasiswa Tidak Lulus 	: "<<jml_tl<<endl;
	cout << "Nilai Rata Rata Mahasiswa 	: "<<ips/jml_m<<endl;

	return 0;
}