//library
#include <iostream>
using namespace std;

//deklarasi variabel global
int panjang, lebar;
//implementasi fungsi dan prosedur
void input(){
    cout << "masukkan panjang : ";
    cin >> panjang;
    cout << "masukkan lebar : ";
    cin >> lebar;
}

int luaspersegi( int a,int b){
    return a * b;
}
int jumlah(int x, int y, int z){
    return x+y+z;
