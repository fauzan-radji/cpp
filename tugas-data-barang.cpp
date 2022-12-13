#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  struct Barang {
    string kode;
    string nama;
    short unit;
    int harga;
  };

  short jumlah_data;
  cout << "Input Data Persediaan" << endl;
  cout << "Jumlah Data: "; cin >> jumlah_data;
  cin.ignore(1, '\n');

  Barang barang[jumlah_data];

  // Input Data Barang
  for(int i = 0; i < jumlah_data; i++) {
    cout << "\nData " << i+1 << endl;
    cout << "Kode Barang : "; getline(cin, barang[i].kode);
    cout << "Nama        : "; getline(cin, barang[i].nama);
    cout << "Unit        : "; cin >> barang[i].unit;
    cout << "Harga       : "; cin >> barang[i].harga;
    cin.ignore(1, '\n');
  }

  // Output Data Barang
  cout << "\n======================================================\n";
  cout << setw(40) << "Data Persediaan Toko XYZ";
  cout << "\n------------------------------------------------------\n";

  struct {
    short unit;
    int harga;
  } total = {0, 0};

  cout << setw(12) << "Kode Barang" << setw(11) << "Nama" << setw(11) << "Unit" << setw(8) << "Harga" << setw(10) << "Total";
  cout << "\n------------------------------------------------------\n";

  for(int i = 0; i < jumlah_data; i++) {
    cout << setw(8) << barang[i].kode;
    cout << setw(20) << barang[i].nama;
    cout << setw(5) << barang[i].unit;
    cout << setw(10) << barang[i].harga;

    int totalHarga = barang[i].harga * barang[i].unit;
    cout << setw(10) << totalHarga << endl;

    total.unit += barang[i].unit;
    total.harga += totalHarga;
  }

  cout << "------------------------------------------------------\n";
  cout << setw(8) << "Total" << setw(25) << total.unit << setw(20) << total.harga;
  cout << "\n------------------------------------------------------\n";

  return 0;
}