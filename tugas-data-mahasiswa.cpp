  #include <iostream>
  using namespace std;
  
  int main()
  {
    int jumlah_mahasiswa = 0;
    cout << "Input Jumlah Data: "; cin >> jumlah_mahasiswa;
    cin.ignore(1, '\n');
  
    string nama[jumlah_mahasiswa];
    string alamat[jumlah_mahasiswa];
    string hobi[jumlah_mahasiswa];
  
    for(int i = 0; i < jumlah_mahasiswa; i++) {
      cout << "\nData " << i+1 << endl;
      cout << "Nama   : "; getline(cin, nama[i]);
      cout << "Alamat : "; getline(cin, alamat[i]);
      cout << "Hobi   : "; getline(cin, hobi[i]);
    }
  
    cout << "\n==============================\n";
    cout << "Daftar Mahasiswa";
  
    for(int i = 0; i < jumlah_mahasiswa; i++) {
      cout << "\nData " << i+1 << endl;  
      cout << "Nama   : " << nama[i] << endl;
      cout << "Alamat : " << alamat[i] << endl;
      cout << "Hobi   : " << hobi[i] << endl;
    }
  
    return 0;
  }