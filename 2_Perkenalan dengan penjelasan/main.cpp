/*  26-11-2022
    DedekAgung
    Program yang berisi data diri beserta penjelasan basicny    */ // <-- Comment yg bertujuan untuk mengkomentari atau memberi penjelasan tentang statement yang dibuat.

    #include <iostream> // #include berfungsi untuk memanggil file fungsi agar dapat berjalan pada program
    using namespace std; // berfungsi agar selalu menambahkan std pada pemanggilan file fungsi dari iostream, karena untuk memanggil file fungsi yang terdapat pada iostream harus menggunakan std::(nama file fungsi)

    int main () { // badan program pada bahasa C++
        cout<<"Nama : DedekAgung "<<endl; // cout berfungsi untuk mengeluarkan statement // endl berfungsi untuk mengakhiri line atau bisa disebut enter (seperti \n pada C)
        cout<<"Asal : INDONESIA "<<endl; // << adalah rumus yang berarti akan memasukan statement didepan << ke belakang <<
        cout<<"Umur : 18 Tahun \n"; // selain bisa menggunakan endl kita juga bisa menggunakan \n 
        return 0; // Kembali ke nilai awal
    }