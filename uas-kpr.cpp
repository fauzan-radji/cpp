#include <iostream>
#include <iomanip>
using namespace std;

struct KPR {
  string nama;
  short masa;
  int tanggungan;
  float bunga;
  int total;

};

void tampilkan(KPR arr[], int arraySize)
{
  cout << setw(32) << "Daftar Penjualan";
  cout << "\n------------------------------------------------\n";
  cout << setw(10) << "Pelanggan" << setw(9) << "KPR Masa" << setw(11) << "Tanggungan" << setw(6) << "Bunga" << setw(11) << "Total";
  cout << "\n------------------------------------------------\n";

  for(int i = 0; i < arraySize; i++) {
    cout << setw(10) << arr[i].nama;
    cout << setw(9) << arr[i].masa;
    cout << setw(11) << arr[i].tanggungan;
    cout << setw(6) << arr[i].bunga;
    cout << setw(11) << arr[i].total;
    cout << endl;
  }
  cout << "------------------------------------------------\n";
}

int main()
{

  KPR kpr[3] = {
    {
      "Susan",
      10,
      448000000,
      0.8,
      0
    },
    {
      "Badar",
      15,
      450000000,
      1.05,
      0
    },
    {
      "Anita",
      20,
      455000000,
      1.2,
      0
    },
  };

  for(int i = 0; i < 3; i++) {
    kpr[i].total = (kpr[i].bunga * kpr[i].tanggungan) + kpr[i].tanggungan;
  }

  tampilkan(kpr, 3);
  return 0;
}