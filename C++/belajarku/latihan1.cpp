#include <iostream>
using namespace std;

int main(){
    //operator assignment
    int a, b;

    cout << "Masukan angka pertama: ";
    cin >> a;
    cout << "Masukan angka kedua: ";
    cin >> b;
    cout << endl;
    a += b;
    cout << "Setelah penjumlahan " << a << endl; 
    a -= b;
    cout << "Setelah pengurangan " << a << endl;
    a *= b;
    cout << "Setelah perkalian " << a << endl;
    a /= b;
    cout << "Setelah pembagian " << a << endl;
    a %= b;
    cout << "Setelsh modulus " << a << endl;
    
    cout << endl;
    cout << endl;
    //increament dan decreament
    int p;

    cout << "Masukan sebuah angka: ";
    cin >> p;
    cout << endl;
    cout << "Pre-increment: " << ++p << endl;
    cout << "Post-increment: " << p++ << endl;
    cout << "Pre-decrement: " << --p << endl;
    cout << "Post-decrement: " << p-- << endl;

    cout << endl;
    cout << endl;

    cout << "Counter naik" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }

    cout << endl;

    cout << "Counter turun" << endl;
    for (int i = 5; i >= 1; i--){
        cout << i << " ";
    }
    
}