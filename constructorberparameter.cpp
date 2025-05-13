#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    public :
    mahasiswa(int nim, string nama); // Constuctor dengan parameter
};
//Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constructor Dengan parameter Terpanggil" << endl;
    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
}

int main() {
    mahasiswa mhs(12345, "Raihan");
    return 0;
}