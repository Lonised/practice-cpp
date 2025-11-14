#include <iostream>
using namespace std;

void quickSort(double a[], int left, int right) {
    int i = left, j = right;
    double pivot = a[(left + right) / 2];

    while (i <= j) {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;

        if (i <= j) {
            double tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    }

    if (left < j) quickSort(a, left, j);
    if (i < right) quickSort(a, i, right);
}

int main() {
    double a[20];

    cout << "Введите 20 чисел через пробел: \n";
    for (int i = 0; i < 20; i++) {
        cin >> a[i];
    }

    double odd[10];
    int k = 0;
    for (int i = 1; i < 20; i += 2) {
        odd[k++] = a[i];
    }

    quickSort(odd, 0, k - 1);

    k = 0;
    for (int i = 1; i < 20; i += 2) {
        a[i] = odd[k++];
    }

    cout << "\n Последовательность после сортировки элементов на нечётных местах: \n";
    for (int i = 0; i < 20; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
