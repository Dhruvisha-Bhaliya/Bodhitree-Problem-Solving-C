#include <simplecpp>

int main() {
    float a1, b1, c1;
    float a2, b2, c2;

    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    float D = a1 * b2 - a2 * b1;

    float x = (c1 * b2 - c2 * b1) / D;
    float y = (a1 * c2 - a2 * c1) / D;

    cout << x << " " << y;
}
