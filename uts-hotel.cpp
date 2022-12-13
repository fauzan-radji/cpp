  #include <iostream>
  using namespace std;
  
  int main()
  {
    string
      nama = "",
      alamat = "";
  
    int
      harga = 0,
      pajak = 0.1;
  
    short
      tipe_kamar = 1,
      lama_menginap = 0;
  
    long  tagihan = 0;
  
    // meminta masukan user
    cout << "Nama   : "; getline(cin,nama);
    cout << "Alamat : "; getline(cin,alamat);
  
    tanya_tipe_kamar:
    cout << "Berikut adalah harga kamar per hari"<< endl;
    cout << "  1. Rp. 175.000,-"<< endl;
    cout << "  2. Rp. 225.000,-"<< endl;
    cout << "  3. Rp. 350.000,-"<< endl;
    cout << "  4. Rp. 500.000,-"<< endl;
    cout << "Pilih tipe kamar: "; cin >> tipe_kamar;
  
    switch (tipe_kamar)
    {
    case 1: harga = 175000; break;
  
    case 2: harga = 225000; break;
  
    case 3: harga = 350000; break;
  
    case 4: harga = 500000; break;
  
    default:
      cout << "Pilihan Anda tidak valid."<< endl;
      cout << "Silahkan memilih ulang"<< endl;
      goto tanya_tipe_kamar;
      break;
    }
  
    cout << "Berapa hari menginap: "; cin >> lama_menginap;
  
    // kalkulasi tagihan
    tagihan += harga * lama_menginap;
    if(lama_menginap > 5) {
      tagihan -= tagihan * 0.05;
    }
    tagihan += tagihan * pajak;
  
    // menampilkan hasil
    cout << "Nama    : " << nama << endl;
    cout << "Alamat  : " << alamat << endl;
    cout << "Tagihan : Rp." << tagihan << endl;
  
    return 0;
  }