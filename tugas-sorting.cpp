#include <iostream>
#include <iomanip>
using namespace std;

struct Pegawai {
  long long nik;
  string nama;
  string alamat;
  int gaji;
};

void swap(Pegawai* a, Pegawai* b);
void printArr(Pegawai arr[], int arrSize);
int partition(Pegawai arr[], int Low, int High);
void quickSort(Pegawai arr[], int Low, int High);

int main()
{
  int arraySize = 2;
  Pegawai pegawai[arraySize] = {
    {
      7501021001020002,
      "Lebron James",
      "Suwawa",
      2700000
    },
    {
      7501020410030002,
      "Michael Jordan",
      "Tilongkabila",
      3500000
    }
  };

  cout << "Data Belum Terurut";
  printArr(pegawai, arraySize);

  quickSort(pegawai, 0, arraySize-1);

  cout << "Data Setelah Terurut";
  printArr(pegawai, arraySize);
  return 0; 
}

void quickSort(Pegawai arr[], int Low, int High)
{
  if(Low < High) {
    int pi = partition(arr, Low, High);

    quickSort(arr, Low, pi - 1);
    quickSort(arr, pi + 1, High);
  }
}

int partition(Pegawai arr[], int Low, int High)
{
  int i = Low-1;
  int j = Low;
  int pivot = High;

  for(; j < High; j++) {
    if(arr[j].nik < arr[pivot].nik) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }

  swap(&arr[i+1], &arr[High]);
  return i+1;
}

void swap(Pegawai* a, Pegawai* b)
{ 
  Pegawai c = *a;
  *a = *b;
  *b = c;
} 

void printArr(Pegawai arr[], int arrSize)
{
  cout << "\n------------------------------------------------------------\n";
  cout << setw(3) << "NO" << setw(10) << "NIK" << setw(18) << "NAMA" << setw(16) << "ALAMAT" << setw(10) << "GAJI";
  cout << "\n------------------------------------------------------------\n";
  for(int i = 0; i < arrSize; i++) {
    cout << setw(3) << i+1;
    cout << setw(17) << arr[i].nik;
    cout << setw(16) << arr[i].nama;
    cout << setw(14) << arr[i].alamat;
    cout << setw(8) << arr[i].gaji;
    cout << endl;
  }
  cout << endl;
}