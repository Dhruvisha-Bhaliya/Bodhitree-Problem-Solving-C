#include <iostream>
using namespace std;

int main() {
    char prev, curr;
    int count = 0;

    cin >> prev;
    count = 1;

    while (cin >> curr) {
        if (curr == '.') {
            cout << count << prev;
            break;
        }

        if (curr == prev) {
            count++;
        } else {
            cout << count << prev;
            prev = curr;
            count = 1;
        }
    }

    return 0;
}
