#include <simplecpp>

int main() {
    int n;
    cout << "Please enter your number: ";
    cin >> n;

    turtleSim();

    repeat(n) {
        fd(50);
        lt(360.0 / n);
    }

    penUp();
    fd(10);
    penDown();

    repeat(n) {
        repeat(5) {
            fd(5);
            penUp();
            fd(5);
            penDown();
        }
        lt(360.0 / n);
    }

    wait(5);
    return 0;
}
