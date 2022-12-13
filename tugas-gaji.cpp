#include <iostream>
using namespace std;

int main()
{
  int
    gaji_pokok = 0,
    gaji_bersih = 0,
    tunjangan_anak = 0,
    tunjangan_istri = 0;
  char status = 'a';

  cout << "Gaji Pokok Karyawan: "; cin >> gaji_pokok;

  tanyakan_status:
  cout << "Status Karyawan"<< endl;
  cout << "  a. Menikah"<< endl;
  cout << "  b. Belum Menikah"<< endl;
  cout << "  c. Janda/Duda"<< endl;
  cout << "Masukkan status (a|b|c): "; cin >> status;
  status = tolower(status);
  // jika input status tidak valid maka tanyakan kembali inputan user
  if(
    status != 'a' &&
    status != 'b' &&
    status != 'c'
  ) {
    cout << "Pilihan anda (" << status << ") tidak valid.";
    goto tanyakan_status;
  }

  // jika sudah menikah, tambahkan tunjangan istri
  if (status == 'a') tunjangan_istri = gaji_pokok * 0.1;

  // jika sudah menikah atau pernah menikah
  if (status == 'a' || status == 'c') {
    // tanyakan jumlah anak
    short jumlah_anak = 0;
    cout << "Berapa Anak Karyawan: "; cin >> jumlah_anak;

    if (jumlah_anak <= 2 && jumlah_anak > 0) {
      tunjangan_anak = gaji_pokok * 0.05;
    } else if (jumlah_anak > 2) {
      tunjangan_anak = gaji_pokok * 0.1;
    }
  }

  gaji_bersih += gaji_pokok + tunjangan_istri + tunjangan_anak;
  cout << "Gaji Bersih: " << gaji_bersih;
}