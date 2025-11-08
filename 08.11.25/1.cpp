#include <iostream>
using namespace std; 

int main() {
  int Number;
  cout << "Введите число ";
  cin >> Number; 

  for (int i = 0; i <= Number; i++) {
    if (i % 2 == 0) {
      cout << i << endl; 
    }
  }
  return; 

}
