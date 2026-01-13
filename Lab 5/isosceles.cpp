#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    float d12 = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
    float d23 = (x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3);
    float d31 = (x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1);

    if (fabs(d12 - d23) < 1e-6 || fabs(d23 - d31) < 1e-6 || fabs(d12 - d31) < 1e-6)
        cout << "True";
    else
        cout << "False";

    return 0;
}
