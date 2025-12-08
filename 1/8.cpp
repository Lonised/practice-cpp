#include <iostream>
#include <cmath>
using namespace std;
int main() {
double a, h, l;
	cout << "Вычисление объема и площади поверхности пятигранной пирамиды" << endl;
	cout << "Введите длину стороны основания (a): ";
	cin >> a;
	cout << "Введите высоту пирамиды (h): ";
cin >> h;
cout << "Введите апофему боковой грани (l): ";
cin >> l;
double S_base = (5.0 / 4.0) * a * a * (1.0 / tan(M_PI / 5.0));
double P = 5 * a;
double V = (1.0 / 3.0) * S_base * h;
double S_side = 0.5 * P * l;
double S_total = S_base + S_side;
cout << "Площадь основания: " << S_base << endl;
cout << "Объем пирамиды: " << V << endl;
cout << "Площадь боковой поверхности: " << S_side << endl;
cout << "Полная площадь поверхности: " << S_total << endl;
return 0;
}