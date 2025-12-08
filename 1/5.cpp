#include <iostream>
using namespace std;

int main() {
    double scale, distanceOnMap, distanceReal;

    cout << "Вычисление расстояния между населенными пунктами." << endl;
    cout << "Введите исходные данные:" << endl;

    cout << "Масштаб карты (количество километров в одном сантиметре) -> ";
    cin >> scale;

    cout << "Расстояние между точками, изображающими населенные пункты (см) -> ";
    cin >> distanceOnMap;

    distanceReal = scale * distanceOnMap;

    cout << "Расстояние между населенными пунктами " << distanceReal << " км." << endl;

    return 0;
}
