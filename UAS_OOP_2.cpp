#include <iostream>
#include <string>
using namespace std;

// Nama : Adisty Nurharumandari
// Jawaban UAS OOP no 1

class Car {
private:
    string merk;
    int tahun;
    int kecepatan;

public:
    Car(string merk, int tahun, int kecepatan) {
        this->merk =merk;
        this->tahun=tahun;
        this->kecepatan=kecepatan;
    }

    double calculateTime(double distance) {
        return distance / kecepatan;
    }
};

int main() {
    // Membuat objek mobil
    Car myCar("Civic", 2022, 100);

    // Menghitung waktu yang dibutuhkan untuk menempuh jarak 100 km dengan kecepatan 60 km/jam
    double distance = 200; // dalam kilometer
    double time = myCar.calculateTime(distance);

    printf("Waktu yang dibutuhkan untuk menempuh jarak 100 km adalah: %.2f jam\n", time);

    return 0;
}