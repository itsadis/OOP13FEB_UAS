#include <iostream>
#include <string>
using namespace std;

// Nama : Adisty Nurharumandari
// Jawaban UAS OOP no 1

class Student {
private:
    
    string nama;
    int umur;
    int nilai;

public:
    Student(string nama, int umur, int nilai){
        this->nama=nama;
        this->umur=umur;
        this->nilai=nilai;
    }

    void displayInfo() {
        printf("Nama: %s\n", nama.c_str());
        printf("Usia: %d tahun\n", umur);
        printf("Nilai: %d nilai\n", nilai);
    }
};

int main() {
    // Membuat objek mahasiswa
    Student myStudent("Vilanda Harsono", 20, 89);

    // Menampilkan informasi lengkap mahasiswa
    myStudent.displayInfo();

    return 0;
}