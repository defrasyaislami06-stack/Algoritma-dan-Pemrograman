<?php
// Ubah sesuai NIM kamu (masukkan sebagai string supaya digit bisa dipisah)
$nim = "2510217";

// 1. Jadikan string NIM menjadi array karakter (digit) menggunakan str_split
$digits_str = str_split($nim);

// 2. Karena hasil str_split berupa array karakter (string), ubah tiap karakter ke integer
$digits = array_map(function($d) {
    return (int)$d;
}, $digits_str);

// 3. Hitung total digit (jumlah elemen)
$total_digits = count($digits);

// 4. Cari nilai maksimum dan minimum
$max_digit = max($digits);
$min_digit = min($digits);

// 5. Hitung rata-rata digit
$sum = array_sum($digits);
$average = $sum / $total_digits;

// 6. Reverse array NIM (urutan terbalik)
$reverse = array_reverse($digits);

// Tampilkan hasil
echo "NIM: $nim\n";
echo "Array digit: [" . implode(", ", $digits) . "]\n";
echo "Total digit: $total_digits\n";
echo "Nilai maksimum digit: $max_digit\n";
echo "Nilai minimum digit: $min_digit\n";
echo "Rata-rata digit: $average\n";
echo "Reverse array: [" . implode(", ", $reverse) . "]\n";
?>