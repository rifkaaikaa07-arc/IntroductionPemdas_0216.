#include <iostream>
using namespace std;

float d_1, d_2, Luas;

void prosedurinputdata (){
    cout << "masukkan diagonal_1 : ";
    cin >> d_1;
    cout << "masukkan diagonal_2 : ";
    cin >> d_2;
}

float prosedurhitungLuasKetupat(float d_1, float d_2){
    return 0.5 * d_1 * d_2;
}

void proseduroutput (){
    cout << "LuasKetupat : " << prosedurhitungLuasKetupat(d_1, d_2) << endl;
}

int main (){
    prosedurinputdata();
    proseduroutput();
}