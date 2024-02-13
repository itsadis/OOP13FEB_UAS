#include <iostream>
#include <string>
using namespace std;

// Nama : Adisty Nurharumandari
// Jawaban UAS OOP no 1

class Book {
private:
    string judul;
    string penulis;
    int terbit;

public:
    Book(string judul, string penulis, int terbit) {
        this->judul = judul;
        this->penulis = penulis;
        this->terbit = terbit;
    }

    void displayInfo() {
        printf("Judul: %s\n", judul.c_str());
        printf("Penulis: %s\n", penulis.c_str());
        printf("Tahun Terbit: %d\n", terbit);
    }

    bool isOld() {
        return terbit < 2000;
    }
};

int main() {
    // Membuat objek buku
    Book myBook("Indonesia benci kamu Megawati", "Gerakan 4 Jari", 1995);

    // Menampilkan informasi lengkap beserta status "kuno" atau tidak
    myBook.displayInfo();
    printf("Status Kuno: %s\n", (myBook.isOld() ? "Ya" : "Tidak"));

    return 0;
}