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
}
void output(){
    cout << "Hasilnya : " << luaspersegi(panjang,lebar) << endl; 
}
int main(){//mulai
    input();
    output();
    cout << "Hasil dari penjumlahan : " << jumlah(3,2,7);
}//selesai