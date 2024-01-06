#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    if (1 <= a && a <= 100)
    {
        if (1 <= b && b <= 100)
        {
            cout << a << " + " << b << " = " << a + b << endl;
        }
    }
    return 0;
}