/*  26-11-2022
    DedekAgung
    variabel pada Bahasa C++   */
#include <iostream>
using namespace std;

int main () {
    char a; // Char, character adalah variabel yang berisi karakter jika tidak di isinya max nya maka char hanya bisa menampung 1 karakter
    int b; // int, integer adalah variabel yang dapat diisii dengan bilangan bulat.
    float c; // float, adalah variabel yang bisa diisis dengan bilangan pecahan. 32bit
    double d; // double, adalah variabel yang sama dengan float namun memiliki jangkauan yang lebih besar. 64 bit 

    a = 'A'; // hanya bisa 1 karakter | -127 sampai 127 atau 0 sampai 255
    b = 2022; // batasnya -2147483648 sampai 2147483647
    c = 9.8; // +/- 3.4e +/- 38 (~7 digits)
    d = 9.8; // +/- 1.7e +/- 308 (~15 digits)

    cout<<"Variabel\n"; // bisa menggunakan \n untuk menggantikan endl
    cout<<"(Char)acter 1 karakter                   : "<<a<<endl; // masukan nama variabel tanpa " " untuk memanggil variabel tersebut
    cout<<"(Int)eger atau bilangan bulat            : "<<b<<endl; 
    cout<<"Float, bilangan pecahan                  : "<<c<<endl;
    cout<<"Double, bilangan pecahan yang lebih luas : "<<d<<endl;
    return 0;
}