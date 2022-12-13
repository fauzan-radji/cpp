#include <iostream>
#include <iomanip>
using namespace std;

struct Karyawan {
  short nik;
  string nama;
};

void tampilkan(Karyawan arr[], int arraySize)
{
  cout << setw(4) << "NIK" << setw(6) << "Nama" << endl;
  for(int i = 0; i < arraySize; i++) {
    cout << setw(4) << arr[i].nik << setw(6) << arr[i].nama << endl;
  }
}

void swap(Karyawan* a, Karyawan* b);
void bubbleSort(Karyawan arr[], int arraySize);

int main()
{
  Karyawan karyawan[4] = {
    {
      502,
      "Anisa"
    },
    {
      102,
      "Susan"
    },
    {
      301,
      "Kusno"
    },
    {
      206,
      "Rofik"
    }
  };

  tampilkan(karyawan, 4);
  cout << endl;
  bubbleSort(karyawan, 4);
  tampilkan(karyawan, 4);
  return 0;
}

void bubbleSort(Karyawan arr[], int arrSize)
{
  for (int i = 0; i < arrSize-1; i++) {
    for (int j = 0; j < arrSize-i-1; j++) {
      if (arr[j].nik > arr[j+1].nik) {
        swap(&arr[j], &arr[j+1]);
      }
    }
  }
}

void swap(Karyawan* a, Karyawan* b)
{
  Karyawan c = *a;
  *a = *b;
  *b = c;
}