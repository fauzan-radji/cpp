  #include <iostream>
  using namespace std;
  
  int factorial(int n) {
    int result = n;
    for(int i = n - 1; i > 1; i--) {
      result *= i;
    }
  
    return result;
  }
  
  int main()
  {
    int n = 5;
    cout << "Faktorial dari " << n << " adalah " << factorial(n);
    return 0;
  }