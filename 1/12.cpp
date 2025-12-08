#include <iostream>
using namespace std;

int test(int x, int y, int &p, int &s, int &Max) {
    p = 2 * (x + y);
    s = x * y;
    Max = max(p, s);
}

int main() {
    int x = 5, y = 4;
    int p, s, Max;

    test(x, y, p, s, Max);

    cout << "P: " << p << endl;
    cout << "S: " << s << endl;
    cout << "Max: " << Max << endl;

    return 0;
}
