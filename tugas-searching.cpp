#include <iostream>
using namespace std;

struct Mahasiswa {
  int nim;
  string nama;
  string alamat;
  string kelas;
  float nilai;
};

// Pencarian berdasarkan NIM
int linearSearch(int arraySize, Mahasiswa mahasiswa[], int dataYangDicari);
int binarySearch(int arraySize, Mahasiswa mahasiswa[], int searchData, int Lowest, int Highest);

int main()
{
  int arraySize = 5;
  Mahasiswa mahasiswa[arraySize] = {
    {
      531421057,
      "Abdul Mat",
      "Molosipat",
      "Teknik Perikanan",
      2.4
    },
    {
      531421058,
      "Fahmi Makalalang",
      "Paguyaman",
      "Arsitektur",
      3.0
    },
    {
      531421059,
      "Wisnu Pangaribuan",
      "Medan",
      "Hukum",
      2.8
    },
    {
      531421060,
      "Malik Pasaribu",
      "Medan",
      "Hukum",
      2.75
    },
    {
      531421061,
      "Fauzan Saleh",
      "Surabaya",
      "Teknik Informatika",
      4.0
    }
  };

  int byLinearSearch = linearSearch(arraySize, mahasiswa, 531421060);
  int byBinarySearch = binarySearch(arraySize, mahasiswa, 531421060, 0, arraySize);

  cout << "Menggunakan Linear Search: " << byLinearSearch << endl;
  cout << "Menggunakan Binary Search: " << byBinarySearch << endl;

  return 0;
}

int linearSearch(int arraySize, Mahasiswa mahasiswa[], int dataYangDicari)
{
  for(int i = 0; i < arraySize; i++) {
    if(mahasiswa[i].nim == dataYangDicari)
      return i;
  }

  return -1;
}

int binarySearch(int arraySize, Mahasiswa mahasiswa[], int searchData, int Lowest, int Highest)
{
  if(Lowest > Highest) return -1;

  int Middle = (Lowest + Highest) / 2;
  int dataNIM = mahasiswa[Middle].nim;

  // jika data ditemukan
  if(dataNIM == searchData)
    return Middle;

  // jika data yang dicari KURANG dari data tengah
  else if(dataNIM > searchData)
    // cari di array sebelah KIRI
    return binarySearch(arraySize, mahasiswa, searchData, Lowest, Middle - 1);

  // jika data yang dicari LEBIH dari data tengah
  else if(dataNIM < searchData)
    // cari di array sebelah KANAN
    return binarySearch(arraySize, mahasiswa, searchData, Middle + 1, Highest);

  return -1;
}