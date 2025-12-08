#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double money;
    int tenge, tiyn;

    cout << "Преобразование числа в денежный формат." << endl;
    cout << "Введите дробное число -> ";
    cin >> money;

    tenge = (int)money;
    tiyn = round((money - tenge) * 100);

    cout << money << " тенге. — это " 
         << tenge << " тенге. " 
         << tiyn << " тыин." << endl;

    return 0;
}