#include <iostream>
using namespace std;

class Mahasiswa {
private:
    static int nim;

public:
    int id;
    string nama;

    Mahasiswa(string iNama) {
        nama = iNama;
        setID();
    }

    void setID() {
        id = ++nim;
    }

    void printAll() {
        cout << "ID   = " << id << endl;
        cout << "Nama = " << nama << endl << endl;
    }

    static void setNim(int pNim) {
        nim = pNim;
    }

    static int getNim() {
        return nim;
    }
};

int Mahasiswa::nim = 0;

int main() {
    Mahasiswa mhs1("Sri Dadi");
    Mahasiswa mhs2("Budi Jatmiko");

    Mahasiswa::setNim(9);

    Mahasiswa mhs3("Andi Janu");
    Mahasiswa mhs4("Joko Wahono");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "Akses dari luar objek = " << Mahasiswa::getNim() << endl;

    return 0;
}