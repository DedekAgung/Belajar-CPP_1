/*  26-11-2022
    DedekAgung
    Input pada bahasa C++   */
#include <iostream>
using namespace std;

int main () {
    int a,b;
    cout << "Masukan nilai 1    = ";
    cin >> a ; // cin berfungsi untuk mengambil angka yang kita tulis pada output dan dimasukan ke variabel yang kita tulis di statemnt
    // pada cin \n atau enter yang kita masukan tidak akan masuk ke nama variabel.
    // namun \n tersebut akan masuk ke tmpat smpah, dan bisa saja masuk lagi ketika kita menggunakan fungsi gets/getline
    cout << "Masukan nilai 2    = ";
    cin >> b ;
    cout << "\n\nNilai 1    = " << a << endl;
    cout << "Nilai 2    = " << b << endl;

    string d;
    char e[50];
    cout << "Masukan nama anda  : ";
    getline ( cin >> ws , d ); 
    // getline berfungsi untuk mengambil karakter yang kita tulis pada output 
    // ketika kita menggunakan getline setelah fungsi cin maka masih ada \n yang tersimpan, maka dari itu bisa saja saat fungsi get dijalankan maka yang masuk ke adalah \n yang sebelumnya terdapat pada tempat sampah.
    // ws berfungsi untuk ignore white space, yang artinya space/enter yang sebelumnya ada di kotak sampah saat fungsi cin tidak akan masuk saat kita menggunakan fungsi gets.
    cout << d << endl; 
    cout << "Masukan Nama teman anda    : ";
    cin.getline ( e , 25);
    // terdapat juga cin.getline untuk variabel char yang sudah kita buat max karakter nya menjadi 50.
    // pada cin.getline kita dapat membuat max karakter yang dapat dimasukan pada output.
    cout << e << endl;
    return 0;
}