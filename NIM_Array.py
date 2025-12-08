# minta input NIM sebagai string supaya bisa ambil tiap karakter
nim = input("Masukkan NIM: ")      # misalnya: "2310355"

# pisahkan tiap karakter menjadi digit integer
digits = []
for ch in nim:
    digits.append(int(ch))

print("Array digit:", digits)

# hitung statistik
total_digit = len(digits)
max_digit = max(digits)
min_digit = min(digits)
avg_digit = sum(digits) / total_digit
reverse_digits = digits[::-1]

print("Total seluruh digit:", total_digit)
print("Nilai maksimum digit:", max_digit)
print("Nilai minimum digit:", min_digit)
print("Nilai rata-rata digit: {:.2f}".format(avg_digit))
print("Reverse array NIM:", reverse_digits)