#include <iostream>
using namespace std;

int main() {
    double km, verst;
    cout << "Vvedite rasstoyanie v kilometrah: ";
    cin >> km;

    verst = km / 1.0668;

    cout << "Rasstoyanie v verstah: " << verst << endl;
    return 0;
}
