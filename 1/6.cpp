#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double distance, timeInput;
    int minutes, seconds, totalSeconds;
    double speed;

    cout << "Вычисление скорости бега." << endl;

    cout << "Введите длину дистанции (метров) -> ";
    cin >> distance;

    cout << "Введите время (минут.секунд) -> ";
    cin >> timeInput;

    minutes = (int)timeInput;
    seconds = round((timeInput - minutes) * 100); 
    totalSeconds = minutes * 60 + seconds;

    speed = (distance / 1000.0) / (totalSeconds / 3600.0);

    cout << "Дистанция: " << distance << " м" << endl;
    cout << "Время: " << minutes << " мин " << seconds << " сек = " 
         << totalSeconds << " сек" << endl;
    cout << "Вы бежали со скоростью " << speed << " км/час" << endl;

    return 0;
}
