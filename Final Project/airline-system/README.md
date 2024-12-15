# Airline Reservation System ✈️  

Sistem reservasi penerbangan sederhana ini dibuat menggunakan **C** sebagai tugas Final Project Dasar Pemrograman. Program ini memungkinkan pengelolaan data penerbangan, termasuk reservasi dan pembatalan, dengan penyimpanan data berbasis file teks.  

## ✨ Fitur Utama  

1. **Manajemen Penerbangan**  
   - Menambahkan, menghapus, dan memperbarui informasi penerbangan.  
   - Menampilkan daftar penerbangan lengkap.  

2. **Reservasi Penumpang**  
   - Membuat reservasi untuk penumpang.  
   - Membatalkan reservasi yang sudah ada.  
   - Menampilkan detail reservasi penumpang.  

3. **Penyimpanan Data yang Efisien**  
   - Informasi penerbangan disimpan di file `flights.txt`.  
   - Data reservasi disimpan di file `reservations.txt`.  

---

## 🗂️ Struktur Proyek  

```
airline-system/
├── airline_system.exe   # File eksekusi program
├── data/
│   ├── flights.txt       # Data penerbangan
│   └── reservations.txt  # Data reservasi
├── Makefile             # Script untuk kompilasi otomatis
├── README.md            # Dokumentasi proyek
└── src/
    ├── database.c       # Logika database
    ├── database.h
    ├── flight.c         # Operasi penerbangan
    ├── flight.h
    ├── main.c           # Fungsi utama program
    ├── reservation.c    # Logika reservasi
    └── reservation.h
```  

---

## ⚙️ Instalasi dan Penggunaan  

### 1. Kompilasi  
Gunakan perintah berikut untuk mengompilasi proyek:  

```bash
make
```  

### 2. Eksekusi  
Jalankan program menggunakan:  

```bash
./airline_system
```  

Ikuti petunjuk yang muncul di layar untuk mengelola penerbangan dan reservasi.  

---

## 📚 Contoh Data  

Pesawat GA-001 dari Jakarta ke Bali, tanggal 15/12/2024 pukul 09:23 - 11:34, dengan kuota penumpang masing-masing 100 untuk kelas First dan Ekonomi.
Erlangga membeli 1 tiket perjalanan kelas First.

### File `flights.txt`  
Berisi informasi penerbangan dengan format berikut:  

```plaintext
[Airline Code] [City of Departure] [Destination] [Date Departure] [Time Departure] [Date Arrival] [Time Arrival] [Seats First-Class Available] [Seats First-Class Sold] [Seats Coach Available] [Seats Coach Sold]
```  

**Contoh:**  
```plaintext
GA-001 JAKARTA BALI 15/12/2024 09:23 15/12/2024 11:34 99 1 100 0
```  

### File `reservations.txt`  
Berisi data reservasi penumpang:  
```plaintext
[Passenger Name],[Airline Code],[Class (F/C)]
```  

**Contoh:**  
```plaintext
ERLANGGA RIZQI DWI RASWANTO,GA-001,F
```  

---

## 🚀 Fitur dalam Program  

### Manajemen Penerbangan  
- **`createFlight()`**: Menambahkan penerbangan baru.  
- **`updateFlight(char* flightNumber)`**: Memperbarui data penerbangan.  
- **`deleteFlight(char* flightNumber)`**: Menghapus data penerbangan.  
- **`displayFlights()`**: Menampilkan daftar semua penerbangan.  

### Reservasi Penumpang  
- **`makeReservation(Passenger passenger, Flight flight)`**: Membuat reservasi.  
- **`cancelReservation(Passenger passenger, Flight flight)`**: Membatalkan reservasi.  
- **`displayReservationDetails(Passenger passenger)`**: Menampilkan detail reservasi penumpang.  

---

## 💡 Catatan  

1. Pastikan file `flights.txt` dan `reservations.txt` sudah ada di folder `data/`.  

### Masalah yang Dapat Ditangani  
- Tambah dan ubah informasi penerbangan tanpa kehilangan data sebelumnya.  
- Simpan data secara permanen meskipun program dimatikan.  

---

## 👨‍💻 Kontribusi  

Dibuat oleh **Erlangga Rizqi Dwi Raswanto** sebagai Final Project mata kuliah Dasar Pemrograman.  

Jika ada pertanyaan atau saran, silakan ajukan melalui [issue tracker](#https://github.com/erlanggardr/Dasar-Pemrograman-2024/issues).  
