# ATM Sederhana - Python

# Validasi Nama
while True:
    nama = input("Masukkan Nama: ")
    cek = input("Apakah nama sudah benar? (TRUE/FALSE): ").upper()
    if cek == "TRUE":
        break

# Input NIM → Saldo
nim = input("Masukkan NIM (angka saja): ")
saldo = int(nim)

print("\n=== DATA NASABAH ===")
print(f"Nama  : {nama}")
print(f"Saldo : Rp {saldo:,.0f}\n")

# Menu ATM
while True:
    print("===== MENU ATM =====")
    print("1. Cek Saldo")
    print("2. Tarik Tunai")
    print("3. Setor Tunai")
    print("4. Transfer")
    print("5. Keluar")
    
    pilih = input("Pilih menu: ")

    match pilih:
        case "1":
            print(f"Saldo Anda: Rp {saldo:,.0f}\n")

        case "2":
            tarik = int(input("Jumlah tarik: "))
            if tarik <= saldo:
                saldo -= tarik
                print(f"Tarik berhasil. Sisa saldo: Rp {saldo:,.0f}\n")
            else:
                print("Saldo tidak cukup!\n")

        case "3":
            setor = int(input("Jumlah setor: "))
            saldo += setor
            print(f"Setor berhasil. Saldo kini: Rp {saldo:,.0f}\n")

        case "4":
            trf = int(input("Jumlah transfer: "))
            if trf <= saldo:
                saldo -= trf
                print(f"Transfer berhasil. Sisa saldo: Rp {saldo:,.0f}\n")
            else:
                print("Saldo tidak cukup!\n")

        case "5":
            print("Terima kasih!")
            break

        case _:
            print("Menu tidak tersedia!\n")