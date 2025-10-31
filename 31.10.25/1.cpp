#include <iostream>
#include <iomanip> // для setprecision()
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    cout << "Среднее арифметическое без учета min и max значений.\n";
    cout << "Введите массив (10 целых чисел в одной строке)\n";
    cout << "-> ";

    // Ввод массива
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // Инициализация min и max
    int min = arr[0];
    int max = arr[0];
    int sum = 0;

    // Поиск min, max и суммы
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
        sum += arr[i];
    }

    // Вычисляем среднее без min и max
    int effectiveCount = SIZE - 2; // исключаем 2 элемента
    double average = 0;

    if (effectiveCount > 0) {
        average = static_cast<double>(sum - min - max) / effectiveCount;
    }

    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;

    cout << fixed << setprecision(2); // выводим 2 знака после запятой
    cout << "Среднее арифм. без учета min и max значений: " << average << endl;

    return 0;
}
