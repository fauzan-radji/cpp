#include <iostream>
using namespace std;

int main()
{
  int jumlahSales = 0;
  int totalHasilPenjualan = 0;
  int totalGaji = 0;
  int totalKomisi = 0;
  int totalBonus = 0;

  cout << "Input jumlah Sales: "; cin >> jumlahSales;
  for(int i = 0; i < jumlahSales; i++) {
    string namaSales = "";
    int gajiPokok = 0;
    int hasilPenjualan = 0;
    int gajiBersih = 0;
    int komisi = 0;
    int bonus = 0;

    cout << "Data Sales " << i + 1 << endl;
    cout << "Nama sales: "; cin >> namaSales;
    cout << "Gaji pokok: "; cin >> gajiPokok;
    cout << "Hasil penjualan: "; cin >> hasilPenjualan;

    if(hasilPenjualan < 1000000) {
      komisi += 0.07 * hasilPenjualan;
    } else if(hasilPenjualan >= 1000000) {
      komisi += 0.12 * hasilPenjualan;
    }

    if(hasilPenjualan == 4000000) {
      bonus += 0.05 * hasilPenjualan;
    }

    gajiBersih += gajiPokok + komisi + bonus;

    totalHasilPenjualan += hasilPenjualan;
    totalGaji += gajiBersih;
    totalKomisi += komisi;
    totalBonus += bonus;

    cout << "========================================" << endl;
    cout << "Nama: " << namaSales << endl;
    cout << "Gaji Pokok: " << gajiPokok << endl;
    cout << "Gaji Bersih: " << gajiBersih << endl;
  }

  cout << "========================================" << endl;
  cout << "Total Hasil Penjualan: " << totalHasilPenjualan << endl;
  cout << "Total Gaji: " << totalGaji << endl;
  cout << "Total Komisi: " << totalKomisi << endl;
  cout << "Total Bonus: " << totalBonus << endl;

  return 0;
}