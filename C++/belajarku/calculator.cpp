#include <iostream>
using namespace std;

int main (){
    float a, b, hasil ;
    char aritmatika ;

    cout<< "Selamat datang di kalkulator sederhanaku \n"<< endl;

    //memasukan aritmatika
    cout << "Masukan bilangan pertama = ";
    cin >> a;
    cout << "Masukan aritmatika = ";
    cin >> aritmatika;
    cout << "Masukan bilangan kedua = ";
    cin >> b;
    

    if (aritmatika == '+'){
        hasil = a + b;
    } else if (aritmatika == '-'){
        hasil = a - b;
    } else if (aritmatika == '/'){
        hasil = a / b;
    } else if (aritmatika == '*'){
        hasil = a * b;
    } else {
        cout << "Operasi anda salah" << endl;
    }

    cout << "\nhasil dari " << a << aritmatika << b << " = " << hasil;
}