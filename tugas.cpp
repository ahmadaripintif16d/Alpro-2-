#include <iostream>

using namespace std;

//prototype
void prosesBaca () ;
void prosesTukar () ;
void prosesTampil () ;

//variable global
	int a , b , c, temp;

//program utama
int main () {
	prosesBaca () ;
	prosesTukar () ;
	prosesTampil () ;
return 0 ;
}

//proses membaca
void prosesBaca () {

cout << "masukan nilai a: ";
cin >>a;
cout << "masukan nilai b: ";
cin >>b;
cout << "masukan nilai c: ";
cin >> c ;
}

//prses tukar
void prosesTukar () {
temp = a ;
a = b ;
b = c ;
c = temp ;
}

//proses tampil
void prosesTampil () {
cout << "nilai a sekarang: "<< a <<endl;
cout << "nilai b sekarang: "<< b <<endl;
cout << "nilai c sekarang: "<< c <<endl;

}