#include <simplecpp>

int main() {
    int n;
    cin >> n;

    double product = 1.0;
    double value = 0.0;

    for (int i = 0; i < n; i++) {
        value = sqrt(2 + value);
        product = product * (value / 2);
    }

    product = (long long)(product * 1000000 + 0.5) / 1000000.0;

    cout << product;
}
