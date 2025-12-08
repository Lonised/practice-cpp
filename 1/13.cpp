#include <iostream>
using namespace std;

int test(int a, int b, int c, int d, int &Min)
{
    Min = min(min(min(a,b),c),d);
}

int main() 
{
    int a = 4, b = 3, c = 2, d = 1;
    int Min;

    test(a, b, c, d, Min);

    cout << "Min = " << Min << endl;

    return 0;
}
