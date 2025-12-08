#include <iostream>
using namespace std;

int main() {
    double priceNotebook, priceCover, totalCost;
    int count;

    cout << "Вычисление стоимости покупки." << endl;
    cout << "Введите исходные данные:" << endl;

    cout << "Цена тетради -> ";
    cin >> priceNotebook;

    cout << "Цена обложки -> ";
    cin >> priceCover;

    cout << "Количество комплектов (шт.) -> ";
    cin >> count;
    
    totalCost = (priceNotebook + priceCover) * count;

    cout << "Стоимость покупки: " << totalCost << endl;

    return 0;
}
