#include <simplecpp>

int main() {
    int n;
    cin >> n;

    double x;
    cin >> x;

    double coeff;
    double result = 0.0;

    double a[10005];
    for (int i = 0; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = n; i >= 0; i--) {
        result = result * x + a[i];
    }

    cout << result;
}
