#include <iostream>
using namespace std;

int main()
{
  string nama, hobi, notelp;
  int nim;

  cout << "\n==========[ Input Data ]==========\n";
  cout << "NIM      : "; cin >> nim; cin.ignore(1, '\n');
  cout << "Nama     : "; getline(cin, nama);
  cout << "Hobi     : "; getline(cin, hobi);
  cout << "No. Telp : "; getline(cin, notelp);


  cout << "\n=======[ Biodata Mahasiswa ]=======\n";
  cout << "NIM      : " << nim << endl;
  cout << "Nama     : " << nama << endl;
  cout << "Hobi     : " << hobi << endl;
  cout << "No. Telp : " << notelp << endl;

  return 0;
}