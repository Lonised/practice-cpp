#include <iostream>
using namespace std;
int main() {
    double length, width, height, volume;
    cout << "Введите объем параллелепипеда" << endl;
    cout << "Введите исходные данные" << endl;

    cout << "Длина (sm) -> ";
    cin >> length;

    cout << "Ширина (sm) -> ";
    cin >> width;

    cout << "Высота (sm) -> ";
    cin >> height;

    volume = length * width * height;

    cout << "Объем: " << volume << " .sm." << endl;

    return 0;
}
