#include <iostream>
#include <vector>
#include <string>
#include <limits>   // for std::numeric_limits

using namespace std;

int main() {
    string nim;
    cout << "Masukkan NIM: ";
    cin >> nim;

    // pisahkan tiap karakter digit menjadi integer
    vector<int> digits;
    for (char c : nim) {
        if (c >= '0' && c <= '9') {
            digits.push_back(c - '0');
        } else {
            // kalau ada karakter bukan digit, bisa abaikan atau tampilkan error
            cerr << "Input mengandung karakter non-digit\n";
            return 1;
        }
    }

    // tampilkan array digit
    cout << "Array digit: [ ";
    for (int d : digits) {
        cout << d << " ";
    }
    cout << "]\n";

    int total_digit = digits.size();
    if (total_digit == 0) {
        cout << "Tidak ada digit.\n";
        return 0;
    }

    // nilai maksimum, minimum, jumlah, rata-rata
    int max_digit = numeric_limits<int>::min();
    int min_digit = numeric_limits<int>::max();
    long long sum = 0;

    for (int d : digits) {
        if (d > max_digit) max_digit = d;
        if (d < min_digit) min_digit = d;
        sum += d;
    }

    double avg = static_cast<double>(sum) / total_digit;

    // reverse array
    vector<int> rev_digits;
    rev_digits.reserve(total_digit);
    for (int i = total_digit - 1; i >= 0; --i) {
        rev_digits.push_back(digits[i]);
    }

    // tampilkan hasil
    cout << "Total seluruh digit: " << total_digit << "\n";
    cout << "Nilai maksimum digit: " << max_digit << "\n";
    cout << "Nilai minimum digit: " << min_digit << "\n";
    cout << "Nilai rata-rata digit: " << avg << "\n";

    cout << "Reverse array NIM: [ ";
    for (int d : rev_digits) {
        cout << d << " ";
    }
    cout << "]\n";

    return 0;
}