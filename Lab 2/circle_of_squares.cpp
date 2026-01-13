#include <simplecpp>

int main() {
    int n;
    cout << "Please enter your number: ";
    cin >> n;

    turtleSim();

    repeat(n) {
        repeat(4) {
            fd(100);
            lt(90);
        }

        lt(360.0 / n);
    }

    wait(5);
    return 0;
}
