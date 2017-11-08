#include <iostream>
using namespace std;

int main() {
int angka[10],maks=-999;

for (int i=0; i<10; i++) {
	cout<<"masukan angka:";
cin>> angka [i];
if (angka [i]>=maks)
maks=angka[i];
}
cout<<"============================"<<endl;
cout <<"nilai terbesar nya adalah:"<<maks;
return 0;
}
