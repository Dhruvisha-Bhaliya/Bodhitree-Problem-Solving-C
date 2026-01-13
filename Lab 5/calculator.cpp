#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double a, b;

    cin >> n;
    cin >> a >> b;

    if (n == 1)
        cout << a + b;
    else if (n == 2)
        cout << a - b;
    else if (n == 3)
        cout << a * b;
    else if (n == 4) {
        if (b == 0)
            cout << "Error";
        else
            cout << a / b;
    }
    else if (n == 5)
        cout << fmod(a, b);

    return 0;
}
