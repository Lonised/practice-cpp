#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите количество элементов массива: ";
    cin >> n;

    double a[n];
    cout << "Введите " << n << " чисел через пробел (по возрастанию):\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    double R, K;
    cout << "Введите значение R: ";
    cin >> R;
    cout << "Введите значение K: ";
    cin >> K;

    int indexR = -1, indexK = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == R && indexR == -1) indexR = i;
        if (a[i] == K && indexK == -1) indexK = i;
    }

    if (indexR == -1 || indexK == -1) {
        cout << "Элементы R или K не найдены в массиве.\n";
        return 0;
    }

    double sum = 0;

    int start = min(indexR, indexK) + 1;
    int end = max(indexR, indexK);

    for (int i = start; i < end; i++) {
        sum += a[i];
    }

    cout << "Сумма элементов между R и K: " << sum << endl;

    return 0;
}
