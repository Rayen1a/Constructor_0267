#include <iostream>
#include <string>
using namespace std;

class Barang{
    private:
    string namaBarang;
    string kodeBarang;

    public:
    // construktor berparameter
    Barang(string nama, string kode){
        namaBarang = nama;
        kodeBarang = kode;
    }

    // Fungsi untuk menampilkan informasi barang
    void tampilkaninformasi(){
        cout << "nama Barang: " << namaBarang << endl;
        cout << "kode Barang: " << kodeBarang << endl;
    }
};

int main(){
    // membuat objek barang dengan construktor berparameter
    Barang Barang1("Indomie", "B001");
    Barang Barang2("hp", "B002");

    // menampilkan informasi barang
    Barang1.tampilkaninformasi();
    Barang2.tampilkaninformasi();

    return 0;
}