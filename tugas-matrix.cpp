  #include <iostream>
  #include <iomanip>
  using namespace std;
 
  int main()
  {
    int
      rowsA = 0,
      colsA = 0,
      colsB = 0;
 
    cout << "Jumlah Baris Matriks A: "; cin >> rowsA;
    cout << "Jumlah Kolom Matriks A: "; cin >> colsA;
    cout << "Jumlah Kolom Matriks B: "; cin >> colsB;
 
    int matrixA[rowsA][colsA];
    int matrixB[colsA][colsB];
    int matrixHasil[rowsA][colsB];
 
    // input nilai
    cout << "\nInput Nilai Matrix A\n";
    for (int i = 0; i < rowsA; i++)
    {
      for (int j = 0; j < colsA; j++)
      {
        cout << "A(" << i+1 << ", " << j+1 << ") = "; cin >> matrixA[i][j];
      }
 
    }
 
    cout << "\nInput Nilai Matrix B\n";
    for (int i = 0; i < colsA; i++)
    {
      for (int j = 0; j < colsB; j++)
      {
        cout << "B(" << i+1 << ", " << j+1 << ") = "; cin >> matrixB[i][j];
      }
 
    }
 
    // perkalian
    int jumlah = 0;
    for (int i = 0; i < rowsA; i++)
    {
      for (int j = 0; j < colsB; j++)
      {
        for (int k = 0; k < colsA; k++)
        {
          jumlah = jumlah + matrixA[i][k] * matrixB[k][j];
        }
        matrixHasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
 
    // Menampilkan Matriks Hasil
    cout << "\nHasil Perkalian Matriks:\n";
    for (int i = 0; i < rowsA; i++)
    {
      for (int j = 0; j < colsB; j++)
      {
        cout << setw(4) << matrixHasil[i][j] << " ";
      }
 
      cout << endl;
    }
 
    return 0;
  }