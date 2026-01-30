#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int result;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            result = i;
        }
    }
    return result;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int A, B;
    cin >> A >> B;
    cout << gcd(A, B) << " " << lcm(A, B);
    return 0;
}
