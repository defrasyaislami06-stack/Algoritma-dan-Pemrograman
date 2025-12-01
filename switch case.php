<?php
// ATM Sederhana - PHP

// Validasi Nama
do {
    echo "Masukkan Nama: ";
    $nama = trim(fgets(STDIN));

    echo "Apakah nama sudah benar? (TRUE/FALSE): ";
    $valid = trim(fgets(STDIN));
} while (strtoupper($valid) !== "TRUE");

// Input NIM dan Konversi ke Saldo
echo "Masukkan NIM (angka saja): ";
$nim = trim(fgets(STDIN));
$saldo = (int)$nim;

// Tampilkan data awal
echo "\n=== DATA NASABAH ===\n";
echo "Nama  : $nama\n";
echo "Saldo : Rp " . number_format($saldo, 0, ',', '.') . "\n\n";

// Menu ATM
while (true) {
    echo "===== MENU ATM =====\n";
    echo "1. Cek Saldo\n";
    echo "2. Tarik Tunai\n";
    echo "3. Setor Tunai\n";
    echo "4. Transfer\n";
    echo "5. Keluar\n";
    echo "Pilih menu: ";
    $pilih = trim(fgets(STDIN));

    switch ($pilih) {
        case 1:
            echo "Saldo Anda: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";
            break;

        case 2:
            echo "Jumlah tarik: ";
            $tarik = trim(fgets(STDIN));
            if ($tarik <= $saldo) {
                $saldo -= $tarik;
                echo "Tarik berhasil. Sisa saldo: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";
            } else echo "Saldo tidak cukup!\n\n";
            break;

        case 3:
            echo "Jumlah setor: ";
            $setor = trim(fgets(STDIN));
            $saldo += $setor;
            echo "Setor berhasil. Saldo kini: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";
            break;

        case 4:
            echo "Jumlah transfer: ";
            $trf = trim(fgets(STDIN));
            if ($trf <= $saldo) {
                $saldo -= $trf;
                echo "Transfer berhasil. Sisa saldo: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";
            } else echo "Saldo tidak cukup!\n\n";
            break;

        case 5:
            echo "Terima kasih!\n";
            exit;

        default:
            echo "Menu tidak tersedia!\n\n";
    }
}
?>