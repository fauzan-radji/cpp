  #include <iostream>
  using namespace std;
    
  int main()
  {
    short
      jumlah_mahasiswa,
      total_nilai,
      rerata;
    
    cout << "Input Jumlah Mahasiswa: "; cin >> jumlah_mahasiswa;
    
    for (short i = 1; i <= jumlah_mahasiswa; i++) {
      short nilai;
      cout << "  Masukkan nilai Mahasiswa ke-"<< i <<": "; cin >> nilai;
    
      total_nilai += nilai;
    }
    
    cout << "\n=======================================" << endl;
    cout << "Total nilai: " << total_nilai << endl;
    cout << "Rerata nilai: " << total_nilai / jumlah_mahasiswa << endl;
    
    return 0;
  }