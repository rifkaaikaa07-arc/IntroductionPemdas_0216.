//library
#include <iostream>
using namespace std;
//deklarasi variabel
int p, l;

//implementasi fungsi dan prosedur
void input (){
    cout << "masukkan panjang : ";
    cin >> p;
    cout << "masukkan lebar : ";
    cin >> l;
}

int Luaspersegi(){
  return p * l;
}
void output(){
    cout << "Hasilnya : " << Luaspersegi();
}
int main(){ //mulai
    input();
    output();
}//selesai
