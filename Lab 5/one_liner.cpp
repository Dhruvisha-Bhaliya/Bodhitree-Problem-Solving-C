#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2, a, b;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> a >> b;

    float cross = (a - x1) * (y2 - y1) - (b - y1) * (x2 - x1);

    if (fabs(cross) < 1e-6 &&
        a >= min(x1, x2) && a <= max(x1, x2) &&
        b >= min(y1, y2) && b <= max(y1, y2))
        cout << "True";
    else
        cout << "False";

    return 0;
}
