#include <simplecpp>

int main() {
    int N;
    cin >> N;

    double sum = 0.0;
    int sign = 1;

    for (int i = 0; i < N; i++) {
        sum = sum + sign * (1.0 / (2*i + 1));
        sign = -sign;
    }

    double pi = 4 * sum;
    cout << pi;

    return 0;
}
