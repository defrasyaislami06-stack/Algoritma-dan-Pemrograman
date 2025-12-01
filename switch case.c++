#include <iostream>
using namespace std;

int main() {
    string nama, valid;

    // Validasi nama
    do {
        cout << "Masukkan Nama: ";
        getline(cin, nama);

        cout << "Apakah nama sudah benar? (TRUE/FALSE): ";
        getline(cin, valid);
    } while (valid != "TRUE" && valid != "True" && valid != "true");

    // Input NIM → Saldo
    long long nim, saldo;
    cout << "Masukkan NIM (angka saja): ";
    cin >> nim;
    saldo = nim;

    cout << "\n=== DATA NASABAH ===\n";
    cout << "Nama  : " << nama << endl;
    cout << "Saldo : Rp " << saldo << endl;

    int pilih;
    while (true) {
        cout << "\n===== MENU ATM =====\n";
        cout << "1. Cek Saldo\n";
        cout << "2. Tarik Tunai\n";
        cout << "3. Setor Tunai\n";
        cout << "4. Transfer\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                cout << "Saldo Anda: Rp " << saldo << endl;
                break;

            case 2: {
                long long tarik;
                cout << "Jumlah tarik: ";
                cin >> tarik;
                if (tarik <= saldo) {
                    saldo -= tarik;
                    cout << "Tarik berhasil. Sisa saldo: Rp " << saldo << endl;
                } else cout << "Saldo tidak cukup!" << endl;
                break;
            }

            case 3: {
                long long setor;
                cout << "Jumlah setor: ";
                cin >> setor;
                saldo += setor;
                cout << "Setor berhasil. Saldo kini: Rp " << saldo << endl;
                break;
            }

            case 4: {
                long long trf;
                cout << "Jumlah transfer: ";
                cin >> trf;
                if (trf <= saldo) {
                    saldo -= trf;
                    cout << "Transfer berhasil. Sisa saldo: Rp " << saldo << endl;
                } else cout << "Saldo tidak cukup!" << endl;
                break;
            }

            case 5:
                cout << "Terima kasih!\n";
                return 0;

            default:
                cout << "Menu tidak tersedia!" << endl;
        }
    }

    return 0;
}