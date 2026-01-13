#include <simplecpp>

long long factorial(int x) {
    long long fact = 1;
    for(int i = 1; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, r;
    cin >> n >> r;

    long long p, c;

    p = factorial(n) / factorial(n - r);
    c = factorial(n) / (factorial(r) * factorial(n - r));

    cout << p << " " << c;
}
