
#include <iostream>
using namespace std;
class Buku {
    string judul;

public:
    Buku& setJudul(string judul) {
        this->judul = judul;
        return *this; // chain function
    }

    string getJudul() {
        return this->judul;
    }
};

int main() {
    Buku bukunya;
    cout << bukunya.setJudul("Matematika").getJudul(); // chain function calls
    return 0;
}
#include <iostream>
using namespace std;

class Angka {
private:
    int *arr;
    int panjang;
public:
    Angka(int); // constructor
    ~Angka();   // destructor
    void cetakData();
    void isiData();
};

Angka::Angka(int i) {
    panjang = i;
    arr = new int[i];
    isiData();
}

Angka::~Angka() {
    cout << endl;
    cetakData();
    delete[] arr;
    cout << "Alamat array sudah dilepaskan" << endl;
}

void Angka::cetakData() {
    for (int i = 0; i < panjang; i++) {
        cout << i << " = " << arr[i] << endl;
    }
}

void Angka::isiData() {
    for (int i = 0; i < panjang; i++) {
        cout << i << " = ";
        cin >> arr[i];
    }
    cout << endl;
}

int main() {
    Angka belajarcpp(3);
    Angka *ptrBelajarcpp = new Angka(5);
    delete ptrBelajarcpp;
    return 0;
}

#include <iostream>
using namespace std;

class Mahasiswa {
private:
    int nim;
    string nama;
public:
    Mahasiswa();
    Mahasiswa(int);
    Mahasiswa(string);
    Mahasiswa(int, string);
    void cetak();
};

Mahasiswa::Mahasiswa() {
    nim = 0;
    nama = "";
}

Mahasiswa::Mahasiswa(int iNim) {
    nim = iNim;
    nama = "";
}

Mahasiswa::Mahasiswa(string iNama) {
    nim = 0;
    nama = iNama;
}

Mahasiswa::Mahasiswa(int iNim, string iNama) {
    nim = iNim;
    nama = iNama;
}

void Mahasiswa::cetak() {
    cout << endl << "NIM = " << nim << endl;
    cout << "Nama = " << nama << endl;
}

int main() {
    Mahasiswa mhs1;
    Mahasiswa mhs2(20);
    Mahasiswa mhs3("Indra");
    Mahasiswa mhs4("Fauzan");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();

    return 0;
}

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