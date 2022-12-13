  #include <iostream>
  using namespace std;   
  
  void printArray(int arr[], int size)
  {
    for (int i = 0; i < size; i++)
      cout << arr[i] << " ";
  
    cout << endl;
  }
  
  int main()
  {
    int
      jumlah_deret = 0,
      akumulator = 1;
  
    cout << "Masukkan Jumlah Deret: "; cin >> jumlah_deret;
  
    int accumulators[jumlah_deret];
  
    for(int i = 1; i <= jumlah_deret; i++) {
      // memasukkan deret sekarang ke array accumulators secara terbalik
      accumulators[jumlah_deret - i] = akumulator;
  
      akumulator += i;
    }
  
    // mencetak array accumulators yang memiliki panjang sejumlah jumlah_deret
    printArray(accumulators, jumlah_deret);
  
    return 0;
  }