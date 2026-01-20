#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    float m;
    cin >> n >> m;

    float x = (n + 1) / 2.0;

    while (fabs(x * x - n) >= m) {
        x = 0.5 * (x + n / x);
    }

    cout << x;
    return 0;
}
