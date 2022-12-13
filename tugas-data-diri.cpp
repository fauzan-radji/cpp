#include <iostream>
using namespace std;

int main()
{
  struct Alamat
  {
    string jalan;
    string kota;
  };
  
  struct Tanggal
  {
    short tanggal;
    short bulan;
    short tahun;
  };

  struct Mahasiswa {
    int nim;
    string nama;
    string tempat_lahir;
    Tanggal tanggal_lahir;
    Alamat alamat;
  };
  
  Mahasiswa mahasiswa = {
    531421043,
    "Nazier",
    "Gorontalo",
    {
      24,
      7,
      2003
    },
    {
      "Jl. Samratulanggi No. 52",
      "Kota Gorontalo"
    }
  };

  cout << "NIM           : " << mahasiswa.nim << endl;
  cout << "Nama          : " << mahasiswa.nama << endl;
  cout << "Tempat lahir  : " << mahasiswa.tempat_lahir << endl;
  cout << "Tanggal lahir : " << mahasiswa.tanggal_lahir.tanggal << "-" << mahasiswa.tanggal_lahir.bulan << "-" << mahasiswa.tanggal_lahir.tahun << endl;
  cout << "Alamat        : " << mahasiswa.alamat.jalan << endl;
  cout << "                " << mahasiswa.alamat.kota << endl;
 
  return 0;
}