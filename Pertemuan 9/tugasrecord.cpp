#include <iostream>

using namespace std;

typedef struct {
	string nama,alamat;
	int ktp,hp,umur;
	string goldarah; 
}tiket;

typedef struct {
	string asal,tujuan,jt;

}keberangkatan;

typedef struct {
	int jam,menit,detik;

}jm;

typedef struct {
	int tgl,thn;
	string hari,bulan;

}hari;

int main () {
	tiket a;
	keberangkatan b;
	jm c;
	hari d;
	
	
	cout<<"selamat datang di program pemesanan tiket kreta api"<<endl;
	cout<<"=================================================="<<endl;
	cout<<"masukan nama : ";
	cin>>a.nama;
	cout<<"masukan no ktp : ";
	cin>>a.ktp;
	cout<<"masukan alamat : ";
	cin>>a.alamat;
	cout<<"masukan no hp : ";
	cin>>a.hp;
	cout<<"masukan umur : ";
	cin>>a.umur;
	cout<<"masukan golongan darah : ";
	cin>>a.goldarah;
	cout<<"masukan alamat asal : ";
	cin>>b.asal;
	cout<<"masukan alamat tujuan : ";
	cin>>b.tujuan;
	cout<<"masukan tipe tiket : ";
	cin>>b.jt;
	cout<<"jam : ";
	cin>>c.jam;
	cout<<"menit : ";
	cin>>c.menit;
	cout<<"detik : ";
	cin>>c.detik;
	cout<<"masukan tanggal : "; 
	cin>>d.tgl;
	cout<<"masukan hari : "; 
	cin>>d.hari;
	cout<<"bulan : "; 
	cin>>d.bulan;
	cout<<"tahun : "; 
	cin>>d.thn;
	cout<<"=================================================="<<endl;
		cout<<"tiket kreta api anda adalah : "<<endl;
	cout<<"nama penumpang : "<<a.nama<<endl;
	cout<<"no ktp : "<<a.ktp<<endl;
	cout<<"alamat : "<<a.alamat<<endl;
	cout<<"no hp : "<<a.hp<<endl;
	cout<<"umur : "<<a.umur<<endl;
	cout<<"golongan darah : "<<a.goldarah<<endl;
	cout<<"awal : "<<b.asal<<endl;
	cout<<"tujuan : "<<b.tujuan<<endl;
	cout<<"jam berangkat = "<<c.jam<<";"<<c.menit<<";"<<c.detik<<endl;
	cout<<"hari dan tanggal keberangkatan = "<<d.hari<<":"<<d.tgl<<":"<<d.bulan<<":"<<d.thn<<endl;

	
	
	return 0;
}