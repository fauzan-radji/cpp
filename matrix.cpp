#include <iostream>
using namespace std;

void printAsMatrix() {
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= col; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}