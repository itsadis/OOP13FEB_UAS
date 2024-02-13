#include <iostream>
#include <string>
using namespace std;

// Nama : Adisty Nurharumandari
// Jawaban UAS OOP no 1

class RekeningBank {
private:
    
    string pemilik;
    double saldo;

public:
    RekeningBank(string pemilik, double saldoAwal) {
        this->pemilik = pemilik;
        this->saldo = saldoAwal;
    }

    void setoran(double jumlah) {
        saldo += jumlah;
        printf("Setoran berhasil. Saldo terkini: %.2f\n", saldo);
    }

    void penarikan(double jumlah) {
        if (jumlah > saldo) {
            printf("Penarikan gagal. Saldo tidak mencukupi.\n");
        } else {
            saldo -= jumlah;
            printf("Penarikan berhasil. Saldo terkini: %.2f\n", saldo);
        }
    }
};

int main() {
    // Membuat objek rekening bank
    RekeningBank rekening("Sasuke Uchiha", 4000);

    // Melakukan beberapa penyetoran dan penarikan uang
    rekening.setoran(500);
    rekening.penarikan(200);
    rekening.penarikan(1500); // penarikan gagal karena saldo tidak mencukupi

    return 0;
}
