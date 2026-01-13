#include <simplecpp>

int main() {
    int N;
    cin >> N;

    double product = 1.0;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 1) {
            product *= (double)(i + 1) / i;
        } else {
            product *= (double)i / (i + 1);
        }
    }

    double pi = 2 * product;

    cout << pi;
}
