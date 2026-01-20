#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 1, b = 1;
    int fib = 1;

    while (b < N) {
        fib = b;
        int next = a + b;
        a = b;
        b = next;
    }

    cout << fib;
    return 0;
}
